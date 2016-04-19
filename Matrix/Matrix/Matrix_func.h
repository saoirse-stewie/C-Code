//Name:Saoirse Stewart
//Date:26/1/16
//Description:Matrix functions

#include <iostream>
#include "Matrix.h"
#include "Test.h"


using namespace std;

int Matrix::matrix_cnt = 0;
//Default Constructor code without initaliser list
int Matrix::getMatrixcnt(){ return matrix_cnt; }


Matrix::Matrix() :m(0), n(0), mat(nullptr) {
#if VERBOSE 
	std::cout << "Testing Default Constructor\n" << std::endl;
#endif
	matrix_cnt++;
}

//two arg constructor
Matrix::Matrix(int mm, int nn) :m(mm), n(nn), mat(nullptr){

#if VERBOSE
	std::cout << "Testing two arg constructor\n" << std::endl;
#endif
	try{
		mat = new double*[m];//dynamically creates memory on the heap for row
		if (mat != nullptr)
		{
			for (int i = 0; i < m; i++)
			{
				mat[i] = new double[n]; //dynamically creates memory on the heap for column
				for (int j = 0; j < n; j++)
				{
					mat[i][j] = 0.0; // sets array to equal zero
				}
			}
		}
	}
	catch (std::bad_alloc& e)
	{
		std::cout << "Exception" << e.what() << std::endl;

	}
	matrix_cnt++;
}

//Copy constructor
Matrix::Matrix(const Matrix &mx) : m(mx.GetM()), n(mx.GetN()), mat(nullptr)
{
#if VERBOSE 
	std::cout << "Testing Copy Constructor\n" << std::endl;
#endif

	mat = new double *[m];//dynamically creates memory on the heap for row
	try{
		if (mat != nullptr)
		{
			for (int i = 0; i < mx.GetM(); i++)
			{
				mat[i] = new double[n];//dynamically creates memory on the heap for column
				for (int j = 0; j < mx.GetN(); j++)
				{
					mat[i][j] = mx.GetElement(i, j);//set the elements from two arg constructor and put them into copy array 
				}
			}
		}
	}
	catch (std::bad_alloc& e)
	{
		std::cout << "Exception" << e.what() << std::endl;

	}
	matrix_cnt++;
}

//Destructor
Matrix::~Matrix(){
#if VERBOSE
	std::cout << "\nTesting Destructor\n" << std::endl;
#endif

	if (mat != nullptr)
	{
		for (int i = 0; i < m; i++)
		{
			delete[] mat[i];//free the space allocated on the heap 
		}
		delete[] mat;
	}
	matrix_cnt--;
}

//get element of array
double Matrix::GetElement(int i, int j)const
{
	return mat[i][j];
}
//sets the element of the array
void Matrix::SetElement(int i, int  j, double val)
{
	mat[i][j] = val;
}

const Matrix Matrix:: operator +(const Matrix& ma)const
{
	Matrix result(*this);

	try{
		if (ma.GetM() == result.GetM() && ma.GetN() == result.GetN())
		{

			for (int i = 0; i < ma.GetM(); i++)
			{
				for (int j = 0; j < ma.GetN(); j++)
				{
					double m1 = ma.GetElement(i, j);
					double m2 = mat[i][j];
					result.mat[i][j] = m1 + m2;
					//result.SetElement(i, j, m1 + m2);
					//result += ma;
				}
			}
			return result;
		}
		else
		{
			throw std::out_of_range("matrix out of range");
		}
	}
	catch (std::out_of_range &e)
	{
		std::cout << " Exception " << e.what() << std::endl;
	}
	matrix_cnt++;
}
const Matrix Matrix:: operator -(const Matrix& ma)const
{
	Matrix result(*this);
	try{

		if (ma.GetM() == result.GetM() && ma.GetN() == result.GetN())
		{

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					double m1 = ma.GetElement(i, j);
					double m2 = mat[i][j];
					result.mat[i][j] = m1 - m2;
				}
			}
			return result;
		}
		else
		{
			throw std::out_of_range("matrix out of range");
		}
	}
	catch (std::out_of_range &e)
	{
		std::cout << " Exception " << e.what() << std::endl;
	}
	matrix_cnt++;
}
const Matrix Matrix :: operator *(const Matrix &ma)const
{
	Matrix temp(m, ma.GetN());
	double m1 = 0;
	double m2 = 0;
	try{

		if (ma.GetN() == temp.GetM())
		{

			for (int i = 0; i < m; i++)//row
			{
				for (int j = 0; j < ma.GetN(); j++)
				{

					temp.mat[i][j] = 0;
					for (int x = 0; x < ma.GetM(); x++)
					{
						//std::cout << n << std::endl;
						temp.mat[i][j] += mat[i][x] * ma.mat[x][j];
					}
				}

			}

			return temp;
		}
		else
		{
			throw std::out_of_range("matrix out of range");
		}
		return ma;
	}
	catch (std::out_of_range &e)
	{
		std::cout << " Exception " << e.what() << std::endl;
	}

}
Matrix& Matrix:: operator =(const Matrix& ma)
{

	std::cout << "= operator" << std::endl;

	if (this != &ma)// check that my address is not the same as the matrix coming in
	{
		if (mat != nullptr)
		{
			for (int i = 0; i < m; i++)
			{
				delete[] mat;//free the space allocated on the heap 
			}
			delete[] mat;
		}

		matrix_cnt--;
		m = ma.GetM();
		n = ma.GetN();
		mat = new double *[ma.GetM()];//dynamically creates memory on the heap for row

		if (mat != nullptr)
		{
			for (int i = 0; i < ma.GetM(); i++)
			{

				mat[i] = new double[ma.GetN()];//dynamically creates memory on the heap for column

				for (int j = 0; j < ma.GetN(); j++)
				{
					mat[i][j] = ma.GetElement(i, j);
				}
			}

		}

		matrix_cnt++;
	}
	return *this;
}

//overloading operator
std::ostream &operator <<(std::ostream &output, Matrix &m)
{
	output << "(" << m.GetM() << "," << m.GetN() << ")" << std::endl;
	return output;
}

