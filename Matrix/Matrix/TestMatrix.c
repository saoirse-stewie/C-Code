



#ifndef TESTMATRIX_H_INCLUDED
#define TESTMATRIX_H_INCLUDED

#include <iostream>


void testMatrices();
void testCopyConstructor();
void testAdditionOverloading();
void testsubstractionOverloading();
void testMultiplicationOverloading();

template <typename T>
void testMatrices()
{
	std::string message("Test the Matrices");

	//std::cout << stars << message << stars << std::endl;


	Matrix<T> ma(3, 4);

	std::cout << "M1 is equal to:  " << ma.GetM() << std::endl;
	std::cout << "M1 is equal to:  " << ma.GetN() << std::endl;
}
template <typename T>
void testCopyConstructor()
{
	std::string message("Test Copy overloading Matrices");

	Matrix<T> ma(3, 4);

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma.SetElement(i, j, 8);
	}
	std::cout << "matrix one" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma.GetElement(i, j) << "  ";
		std::cout << std::endl;



	}
	Matrix<T> ma2(ma);
	std::cout << "matrix two" << std::endl;

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma2.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
}
template <typename T>
void testAdditionOverloading()
{
	std::string message("Test Addtion overloading Matrices");


	Matrix<T> ma(3, 4);
	Matrix<T> ma2(3, 4);

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma.SetElement(i, j, 8);
	}
	std::cout << "matrix one" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma2.SetElement(i, j, 10);
	}
	std::cout << "matrix two" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma2.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
	Matrix<T> ma3 = ma + ma2;

	for (int i = 0; i < ma3.GetM(); i++)
	{
		for (int j = 0; j < ma3.GetN(); j++)
			std::cout << ma3.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
}
template <typename T>
void testsubstractionOverloading()
{
	Matrix<T> ma(3, 4);
	Matrix<T> ma2(3, 4);

	std::string message("Test Subtraction overloading Matrices");

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma.SetElement(i, j, 10);
	}
	std::cout << "matrix one" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma2.SetElement(i, j, 8);
	}
	std::cout << "matrix two" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma2.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
	Matrix<T> ma3 = ma2 - ma;

	for (int i = 0; i < ma3.GetM(); i++)
	{
		for (int j = 0; j < ma3.GetN(); j++)
			std::cout << ma3.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
}
template <typename T>
void testMultiplicationOverloading()
{
	Matrix<T> ma(3, 3);


	std::string message("Test Subtraction overloading Matrices");

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma.SetElement(i, j, 10);
	}
	std::cout << "matrix one" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
	Matrix<T> ma2(3, 3);
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma2.SetElement(i, j, 8);
	}
	std::cout << "matrix two" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma2.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
	Matrix<T> ma3 = ma*ma2;

	for (int i = 0; i < ma3.GetM(); i++)
	{
		for (int j = 0; j < ma3.GetN(); j++)
			std::cout << ma3.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}



}
template <typename T>
void testEqualsOverloading()
{
	Matrix<T> ma(3, 3);


	std::string message("Test Subtraction overloading Matrices");

	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			ma.SetElement(i, j, 10);
	}
	std::cout << "matrix one" << std::endl;
	for (int i = 0; i < ma.GetM(); i++)
	{
		for (int j = 0; j < ma.GetN(); j++)
			std::cout << ma.GetElement(i, j) << "  ";
		std::cout << std::endl;
	}
}

#endif