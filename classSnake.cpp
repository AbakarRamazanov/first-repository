#include "../rlutil.h"
#include "hpp/classField.hpp"
#include "hpp/classSnake.hpp"

bool Snake::Eat(int X, int Y)
{
	if ( BD[6].X == X && BD[6].Y == Y) 
	{
		return false;
	}
	return true;
}

bool Snake::Check(Field *F)
{
	for(int i(0);i<6;i++)
	{
		if ( ( BD[6].X == BD[i].X ) && ( BD[6].Y == BD[i].Y ) ) 
		{
			return false;
		}
	}
	if ( ( BD[6].X == F->LU.X ) || 
		 ( BD[6].X == F->RD.X ) ||
		 ( BD[6].Y == F->LU.Y ) || 
		 ( BD[6].Y == F->RD.Y ) )
	{
		return false;
	}
	return true;
}

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
	std::cout << "O";
}

void Snake::Draw_Erase()
{
	rlutil::locate(BD[0].X,BD[0].Y);
	std::cout << " ";
}

void Snake::ReInit()
{
	BD[6].X = ( rlutil::tcols() - 10 ) / 2;
	BD[6].Y = ( rlutil::trows() - 10 ) / 2;
	for(int i(5);i>=0;i--)
	{
		BD[i].X=BD[i+1].X-1;
		BD[i].Y=BD[i+1].Y;
	}
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