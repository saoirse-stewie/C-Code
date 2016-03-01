//Name: Saoirse Stewart
//Date:28/1/16
//Description: Main function for Matrix

#include <iostream>
#include "Matrix.h"
#include "Test.h"
#include <ctime>

//Main function using command line arguments to run cases.
int main(int argc, char * argv[])
{
	time_t seconds;
	time(&seconds);
	srand((unsigned int)seconds);

	for (int i = 0; i < argc; i++)
	{
		int t = atoi(*(argv + i));
		switch (t)
		{
		case 1:
			testDefaultConstructor();
			break;
		case 2:
			testTwoArgConstructor();
			break;
		case 3:
			testCopyMatrix();
			break;
		case 4:
			TestAsymmetricMatrix();
			break;
		case 5:
			testAmountOfMatrices();
			break;
		case 6:
			testAdditionMatrix();
			break;
		case 7:
			testMinusMatrix();
			break;
		case 8:
			testEqualMatrix();
			break;
		case 9:
			testMultiplyMatrix();
			break;

		default:
			break;
		}
	}

	return 0;
}


