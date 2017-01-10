#include "../rlutil.h"
#include <thread>
#include "hpp/classCoordinates.hpp"
#include "hpp/classField.hpp"
#include "hpp/classSnake.hpp"
#define UP 14
#define DOWN 15
#define LEFT 16
#define RIGHT 17
#define ESC 0

Field GameField;
Snake Python;
int Direction = RIGHT;

void Func_Direction();
void Func_Move();

int main()
{   
    rlutil::cls();
	GameField.Draw();
	Direction = RIGHT;
    int DefaultColor = rlutil::saveDefaultColor();
	rlutil::hidecursor();
	std::thread thrDirection(Func_Move);
	thrDirection.detach();
	Func_Direction();
    return 0;
}

void Func_Direction()
{
	while(1)
	{
		switch( rlutil::getkey() )
		{
			case UP : 
			{
				if (Direction == DOWN) break;
				Direction = UP;
				rlutil::msleep(10);
				break;
			}
			case DOWN :
			{
				if (Direction == UP) break;
				Direction = DOWN;
				rlutil::msleep(10);
				break;
			}
			case LEFT :
			{
				if (Direction == RIGHT) break;
				Direction = LEFT;
				rlutil::msleep(10);
				break;
			}
			case RIGHT :
			{
				if (Direction == LEFT) break;
				Direction = RIGHT;
				rlutil::msleep(10);
				break;
			}
			case ESC :
			{
				Direction = 0;
				rlutil::resetColor();
				rlutil::showcursor();
				rlutil::cls();
				exit(0);
				break;
			}
		}
	}
}

void Func_Move()
{
	while(1) 
	{
		switch ( Direction ) 
		{
			case UP : 
			{
				rlutil::msleep(50);
				Python.Draw_Erase();
				Python.Replace(0,-1);
				Python.Draw();
				break;
			}
			case DOWN :
			{
				rlutil::msleep(50);
				Python.Draw_Erase();
				Python.Replace(0,1);
				Python.Draw();
				break;
			}
			case LEFT :
			{
				rlutil::msleep(35);
				Python.Draw_Erase();
				Python.Replace(-1,0);
				Python.Draw();
				break;
			}
			case RIGHT :
			{
				rlutil::msleep(35);
				Python.Draw_Erase();
				Python.Replace(1,0);
				Python.Draw();
				break;
			}
		}
		if( !( Python.Check( &GameField ) ) )
		{
			rlutil::resetColor();
			rlutil::showcursor();
			rlutil::cls();
			exit(0);
		}
	}
}