/*
Name: Saoirse Stewart
Date: 12/1/16
Description:Point class
*/

#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"
#include "Test.h"

using namespace std;

//default constructor
Point::Point()
{
	//conditional compilation
	#if VERBOSE
		std::cout << "The default constructor is being called" << std::endl;
	#endif

	x_coord = 0;
	y_coord = 0;

}
//constructor
Point::Point(double x, double y)
{
	#if VERBOSE
		std::cout << "This constructor is being called" << std::endl;
	#endif
	
	x_coord = x;
	y_coord = y;

	
}
Point::Point(const Point &p)
{
	#if VERBOSE
		std::cout << "This copy constructor is being called" << std::endl;
	#endif

	x_coord = p.GetX();
	y_coord = p.GetY();
}

//destructor
Point::~Point(){
	#if VERBOSE 
		std::cout << "Using the Destructor" << std::endl;
	#endif

}
//mutator functions 
void Point::SetX(double val)
{
	x_coord = val;
}
void Point::SetY(double val)
{
	y_coord = val;
}
// accesssor functions 
double Point::GetX()const
{
	return x_coord;
}
double Point::GetY()const 
{
	return y_coord;
}
double Point::Distance_To(const Point &myPoint)
{
	//double distance=0;
	return sqrt((x_coord - myPoint.x_coord)*(x_coord - myPoint.x_coord) + (y_coord - myPoint.y_coord) * (y_coord - myPoint.y_coord));
}
std::ostream &operator <<(std::ostream &output, Point &p)
{
	output << "(" << p.GetX() << "," << p.GetY() << ")" << std::endl;
	return output;
}

