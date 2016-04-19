#include <iostream>
#include "Shape.h"

Shape::Shape()
{
	double x[10] = { 0,0,0,0,0,0,0,0,0,0 };
	double y[10] = { 0 };
	
}
Shape::~Shape()
{

}
Shape::Shape(double a, double b)
{
	double x[10];
	double y[10];

	for (int i = 0; i < 10; i++)
	{
		x[i] = a;
		y[i] = b;

	}
}
double Shape::getX(double j)
{
	
	return a;
}
double Shape::getY(double i)
{
	
	return x[10];
}
void Shape::SetX(double c, double val)
{
	x[10] = val;

}