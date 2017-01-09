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
	Direction = RIGHT;
    int DefaultColor = rlutil::saveDefaultColor();
	rlutil::hidecursor();
	std::thread thrDirection(Func_Direction);
	thrDirection.detach();
	Func_Move();
	
    rlutil::resetColor();
	rlutil::showcursor();
	rlutil::cls();
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
				Direction = UP;
				break;
			}
			case DOWN :
			{
				Direction = DOWN;
				break;
			}
			case LEFT :
			{
				Direction = LEFT;
				break;
			}
			case RIGHT :
			{
				Direction = RIGHT;
				break;
			}
			case ESC :
			{
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
		rlutil::msleep(1000);
		switch ( Direction ) 
		{
			case UP : 
			{
				Python.Draw_Erase();
				Python.Replace(0,-1);
				Python.Draw();
				break;
			}
			case DOWN :
			{
				Python.Draw_Erase();
				Python.Replace(0,1);
				Python.Draw();
				break;
			}
			case LEFT :
			{
				Python.Draw_Erase();
				Python.Replace(-1,0);
				Python.Draw();
				break;
			}
			case RIGHT :
			{
				Python.Draw_Erase();
				Python.Replace(1,0);
				Python.Draw();
				break;
			}
		}
	}
}