#include "../rlutil.h"
#include "hpp/classCoordinates.hpp"
#include "hpp/classField.hpp"

Field::Field():
				LU(5,5),
				RD(rlutil::tcols()-5,rlutil::trows()-5)
{
	Draw();
}

Field::Field(Coordinates _Coor):
								LU(15,15),
								RD(_Coor.get_X(),_Coor.get_Y())
{
	Draw();
}

void Field::Draw()
{
	int DefaultColor(rlutil::saveDefaultColor());
	int color(12);
	rlutil::setColor(color);
	for(int i(LU.Y);i<=RD.Y;i++)
	{	
		rlutil::locate(LU.X,i);
		std::cout << "#";
		rlutil::locate(RD.X,i);
		std::cout << "#";
	}
	for(int i(LU.X);i<=RD.X;i++)
	{
		rlutil::locate(i,LU.Y);
		std::cout << "#";
		rlutil::locate(i,RD.Y);
		std::cout << "#";
	}
	rlutil::resetColor();
}