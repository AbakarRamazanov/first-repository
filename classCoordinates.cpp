#include "rlutil/rlutil.h"
#include "hpp/classCoordinates.hpp"

int Coordinates::get_X()
{
	return X;
}

int Coordinates::get_Y()
{
	return Y;
}

void Coordinates::set_X(int _X)
{
	X = _X;
}

void Coordinates::set_Y(int _Y)
{
	Y = _Y;
}

Coordinates::Coordinates():X(25),Y(25)
{
	
}

Coordinates::Coordinates(int _XY):X(_XY),Y(_XY)
{
}

Coordinates::Coordinates(int _X, int _Y):X(_X),Y(_Y)
{
}

Coordinates::~Coordinates()
{
	
}