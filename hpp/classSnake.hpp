#include "classCoordinates.hpp"

#ifndef CLASSSNAKE_HPP
#define CLASSSNAKE_HPP

struct Body
{
	int X;
	int Y;
};

class Snake
{
public:
	Snake();
	void Draw();
	void Draw_Erase();
	void Replace(int X, int Y);
//private:
	Body BD[7];
};



#endif CLASSSNAKE_HPP