#include "classCoordinates.hpp"
#include <list>

#ifndef CLASSFIELD_HPP
#define CLASSFIELD_HPP

class Snake
{
public:
	void Draw();
//private:
	struct rotation
	{
		int count;
		int rotation;
	};
	list<rotation> turn;
	int  direction;
}


#endif CLASSFIELD_HPP