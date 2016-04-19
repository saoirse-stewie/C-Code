//Name:Saoirse Stewart
//Date: 

#include <iostream>
#include "Matrix.h"
#include "Test.h"
#include <string>
//#include <time.h>
#include <random>
//#include <ctime>

#define MIN 1
#define MAX 100

//testing default constructor
void testMatrices()
{
	std::string stars("***********************");
	std::string message("Test the Matrices");

	std::cout << stars << message << stars << std::endl;


	Matrix<double> ma(3,4);

	unsigned int  m = ma.GetM();
	unsigned int n = ma.GetN();

	std::cout << "M1 is equal to:  " << ma << std::endl;

}


