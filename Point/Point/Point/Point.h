/*
Name: Saoirse Stewart
Date: 12/1/16
Description:Point Header
*/

#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#define VERBOSE 1

class Point{

private:

	double x_coord; //x co-ordinate
	double y_coord; //y co-ordinate

public: 

	Point(); //default constructor
	Point(double x, double y); //2 argument constructor
	Point(const Point &p);
	~Point(); //destructor
	void SetX(double val); //mutator functions
 	void SetY(double val);
	double GetY() const; // accesssor functions 
	double GetX() const; //constant member functions
	double Distance_To(const Point &p);

	friend std::ostream &operator << (std::ostream &, Point &);//overload << operator to display



};
#endif