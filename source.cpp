#include "../rlutil.h"
#include <string>
#include "hpp/classCoordinates.hpp"
#include "hpp/classField.hpp"
#define CLS system("cls");


int main()
{   
    CLS
    int DefaultColor = rlutil::saveDefaultColor();
	Field GameField;
	rlutil::hidecursor();
	rlutil::msleep(1000);
	
	
	
    rlutil::resetColor();
	rlutil::showcursor();
    return 0;
}