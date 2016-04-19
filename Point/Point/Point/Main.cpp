/*
Name: Saoirse Stewart
Date:14/1/16
Description: Main function, with test function

*/


#include <iostream>
#include <string>
#include "Point.h"
#include "Test.h"

//unit test function to test point class default constructor, accessor and mutator methods


int main(int argc, char *argv[])
{
	//double v=0;
	//double v2=0;

	for (int i = 0; i < argc; i++)
	{
		int t = atoi(*(argv + i));

		switch(t)
		{
			case 1:
				testDefaultConstructor();
				break;
			case 2:
				testOtherConstructor();
				break;
			case 3:
				testCopyConstructor();
				break;
			default:
				break;
		}
	}


	

	return 0;
}


