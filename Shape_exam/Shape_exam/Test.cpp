#include <iostream>
#include "Shape.h"

void testDefaultConstructor()
{
	Shape s(2,3);

	for (int i = 0; i < 10;i++)
		std::cout << s.getX(i) << std::endl;
}