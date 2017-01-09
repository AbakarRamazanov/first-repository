#include "../rlutil.h"
#include "hpp/classSnake.hpp"


void Snake::Replace(int X, int Y)
{
	for(int i(0);i<6;i++)
	{
		BD[i].X=BD[i+1].X;
		BD[i].Y=BD[i+1].Y;
	}
	BD[6].X+=X;
	BD[6].Y+=Y;
}

void Snake::Draw()
{
	rlutil::locate(BD[6].X,BD[6].Y);
	std::cout << "*";
}

void Snake::Draw_Erase()
{
	rlutil::locate(BD[0].X,BD[0].Y);
	std::cout << " ";
}

Snake::Snake()
{
	BD[6].X = ( rlutil::tcols() - 10 ) / 2;
	BD[6].Y = ( rlutil::trows() - 10 ) / 2;
	for(int i(5);i>=0;i--)
	{
		BD[i].X=BD[i+1].X-1;
		BD[i].Y=BD[i+1].Y;
	}
}