/*
Name: Saoirse Stewart
Date: 19/1/16
Description: Function Provider
*/

#include <iostream>
#include <string>
#include "Point.h"
#include "Test.h"

void testDefaultConstructor()
{
	std::string stars("********");
	std::string message("Test Default Constructor");

	std::cout << stars << message << stars << std::endl;

	Point p1;//create point by its default constructor
	Point p2;

	//display points 
	std::cout << "P1 = ( " << p1 << "," << p1
		<< ")" << std::endl;
	std::cout << "P2 = (" << p2 << "," << p2
		<< ")" << std::endl;

	//overwrite points using interface member funcitons, then redisplay
	p1.SetX(1.1);
	p1.SetY(2.1);
	p2.SetX(-1.1);
	p2.SetY(-2.2);

	std::cout << "P1 = (" << p1 << "," << p1
		<< ")" << std::endl;
	std::cout << "P2 = ( " << p2 << "," << p2
		<< ")" << std::endl;

}

void testOtherConstructor()
{

	std::string stars("*********");
	std::string message("Test the other constructor");

	Point p3(2, 3);

	std::cout << "x = ( " << p3 << ")" << " y = " << "(" << p3 << ")" << std::endl;
}

void testPassByReference()
{
	Point a(5, 3);

	//std::cout << "Distance between first point and last is " << a.Distance_To << std::endl;
}
void testCopyConstructor()
{
	Point p1(1, 2);
	Point p2(p1);
	Point p3(5, 6);
	Point p4 = p3;

	std::cout << "x = ( " << p1 << ")" << " y = " << "(" << p1 << ")" << std::endl;
	std::cout << "x = ( " << p2 << ")" << " y = " << "(" << p2 << ")" << std::endl;

	std::cout << "x = ( " << p3 << ")" << " y = " << "(" << p3 << ")" << std::endl;
	std::cout << "x = ( " << p4 << ")" << " y = " << "(" << p4 << ")" << std::endl;

}

