#include "classCoordinates.hpp"

#ifndef CLASSFIELD_HPP
#define CLASSFIELD_HPP

class Field
{
public:
	Field();
	Field(Coordinates);
	//~Field();
	void Draw();
	class Coordinates LU; //Left Up
	class Coordinates RD; //Right Down
};

#endif CLASSFIELD_HPP