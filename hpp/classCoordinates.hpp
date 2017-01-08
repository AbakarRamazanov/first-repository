#ifndef CLASSCOORDINATES_HPP 
#define CLASSCOORDINATES_HPP

class Coordinates
{
public:
	int get_X();
	int get_Y();
	void set_X(int); // Сеттер не знает как вести себя в случае ошибки ввода
	void set_Y(int); // Сеттер не знает как вести себя в случае ошибки ввода
	Coordinates();
	Coordinates(int); // Конструктор не знает как вести себя в случае ошибки ввода
	Coordinates(int,int); // Конструктор не знает как вести себя в случае ошибки ввода
	~Coordinates();
//private:
	int X;
	int Y;
};

#endif CLASSCOORDINATES_HPP