//Name:Saoirse Stewart
//Date: 

#include <iostream>
#include "Matrix.h"
#include "Test.h"
#include <string>
#include <time.h>
#include <random>
#include <ctime>

#define MIN 1
#define MAX 100

//testing default constructor
void testDefaultConstructor()
{
	std::string stars("***********************");
	std::string message("Test Default Constructor");

	std::cout << stars << message << stars << std::endl;

	Matrix m;

	std::cout << "M1 is equal to:  " << m << std::endl;

}

//testing two arg constuctor
void testTwoArgConstructor()
{
	std::string stars("***********************");
	std::string message("Test Two Arg Constructor");

	std::cout << stars << message << stars << std::endl;

	Matrix m2(2, 2);


	std::cout << "M2 is equal to:" << m2 << std::endl;

	for (int i = 0; i < m2.GetM(); i++)
	{
		for (int j = 0; j < m2.GetN(); j++)
		{
			m2.SetElement(i, j, (double)rand() / RAND_MAX);
		}
	}
	std::cout << "m2 equals" << std::endl;
	for (int i = 0; i < m2.GetM(); i++)
	{
		for (int j = 0; j < m2.GetN(); j++)
		{
			std::cout << m2.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}
}

//testing copy matrix
void testCopyMatrix()
{
	std::string stars("***********************");
	std::string message("Test Copy Constructor");
	std::cout << stars << message << stars << std::endl;

	Matrix m3(3, 3);

	for (int i = 0; i < m3.GetM(); i++)
	{
		for (int j = 0; j < m3.GetN(); j++)
		{
			m3.SetElement(i, j, (double)rand() / RAND_MAX);
		}
	}
	Matrix m4 = m3;
	std::cout << "m3 " << std::endl;
	for (int i = 0; i < m4.GetM(); i++)
	{
		for (int j = 0; j < m4.GetN(); j++)
		{
			std::cout << m3.GetElement(i, j) << " ";

		}
		std::cout << std::endl;
	}
	std::cout << "m4 " << std::endl;
	for (int i = 0; i < m4.GetM(); i++)
	{
		for (int j = 0; j < m4.GetN(); j++)
		{

			std::cout << m4.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}
}

//testing an Aysmmetric matrix
void TestAsymmetricMatrix()
{

	std::string stars("***********************");
	std::string message("Testing Asymmetric Matrix");
	std::cout << stars << message << stars << std::endl;

	Matrix m5(6, 5);

	for (int i = 0; i < m5.GetM(); i++)
	{
		for (int j = 0; j < m5.GetN(); j++)
		{

			m5.SetElement(i, j, rand() % (MAX - MIN + 1) + MIN);
		}
	}
	std::cout << "m5 " << std::endl;
	for (int i = 0; i < m5.GetM(); i++)
	{
		for (int j = 0; j < m5.GetN(); j++)
		{

			std::cout << m5.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}

}
void testAmountOfMatrices()
{
	std::string stars("******************");
	std::string message("testing the amount of matrices");
	std::cout << stars << message << stars << std::endl;

	Matrix m;
	Matrix m2;
	Matrix m4;

	std::cout << "the amount of matrices are " << m.getMatrixcnt() << std::endl;
	Matrix m5(3, 4);
	std::cout << "Matrix Count:   " << m.getMatrixcnt() << std::endl;
	Matrix m6(m4);
	std::cout << "Matrix Count:   " << m.getMatrixcnt() << std::endl;
}
void testAdditionMatrix()
{
	//Matrix m()

	std::string stars("******************");
	std::string message("testing the addition of matrices");
	std::cout << stars << message << stars << std::endl;

	Matrix m5(2, 2);
	Matrix m6(2, 2);

	for (int i = 0; i < m5.GetM(); i++)
	{
		for (int j = 0; j < m5.GetN(); j++)
		{
			m5.SetElement(i, j, 3);
		}
	}
	for (int i = 0; i < m6.GetM(); i++)
	{
		for (int j = 0; j < m6.GetN(); j++)
		{
			m6.SetElement(i, j, 5);
		}
	}
	Matrix m3 = m5 + m6;//m3 is being created by the copy constructor 

	std::cout << "m5+m6" << std::endl;
	for (int i = 0; i < m3.GetM(); i++)
	{
		for (int j = 0; j < m3.GetN(); j++)
		{
			std::cout << m3.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}
	
}

void testMinusMatrix()
{
	//Matrix m()

	std::string stars("******************");
	std::string message("testing the Subtraction of matrices");
	std::cout << stars << message << stars << std::endl;

	Matrix m5(2, 2);
	Matrix m6(2, 2);

	for (int i = 0; i < m5.GetM(); i++)
	{
		for (int j = 0; j < m5.GetN(); j++)
		{
			m5.SetElement(i, j, 6);
		}
	}
	for (int i = 0; i < m6.GetM(); i++)
	{
		for (int j = 0; j < m6.GetN(); j++)
		{
			m6.SetElement(i, j, 3);
		}
	}
	Matrix m3 = m6-m5;//m3 is being created by the copy constructor 

	std::cout << "m5-m6" << std::endl;
	for (int i = 0; i < m3.GetM(); i++)
	{
		for (int j = 0; j < m3.GetN(); j++)
		{
			std::cout << m3.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}
	
}
void testMultiplyMatrix()
{
	//Matrix m()

	std::string stars("******************");
	std::string message("testing the Multiplication of matrices");
	std::cout << stars << message << stars << std::endl;

	Matrix m5(3, 2);
	Matrix m6(2, 3);

	std::cout << std::endl;

	for (int i = 0; i < m5.GetM(); i++)
	{
		for (int j = 0; j < m5.GetN(); j++)
		{
			m5.SetElement(i, j, rand() % (MAX - MIN + 1) + MIN);
		}
	}
	for (int i = 0; i < m6.GetM(); i++)
	{
		for (int j = 0; j < m6.GetN(); j++)
		{
			m6.SetElement(i, j, rand() % (MAX - MIN + 1) + MIN);
		}
	}

	for (int i = 0; i < m5.GetM(); i++)
	{
	
		for (int j = 0; j < m5.GetN(); j++)
		{
			std::cout << m5.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < m6.GetM(); i++)
	{
		for (int j = 0; j < m6.GetN(); j++)
		{
			std::cout << m6.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}
	
	Matrix m3 = m5*m6;//m3 is being created by the copy constructor 

	std::cout << "m5*m6" << std::endl;

	for (int i = 0; i < m3.GetM(); i++)
	{
		for (int j = 0; j < m3.GetN(); j++)
		{
			std::cout << m3.GetElement(i, j) << " ";
		}
		std::cout << std::endl;
	}

}

void testEqualMatrix()
{
	//Matrix m()

	std::string stars("******************");
	std::string message("testing to see if two matrices equal");
	std::cout << stars << message << stars << std::endl;

	Matrix m6(2, 2);
	
	

for (int i = 0; i < m6.GetM(); i++)
	{
		for (int j = 0; j < m6.GetN(); j++)
		{
			m6.SetElement(i, j, 6);
		}
	}
Matrix m3;
	m3 = m6;
	std::cout << "m3=m6" << std::endl;
	for (int i = 0; i < m3.GetM(); i++)
	{
		for (int j = 0; j < m3.GetN(); j++)
		{
			std::cout << m3.GetElement(i,j) << " " ;
		}
		std::cout << std::endl;
	}
	
}

