
#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

class Shape{

private:
	/* make dynamic after*/
	double x[10];
	double y[10];
	double a;
	double b;


public:
	double getX(double);
	double getY(double);
	void SetX(double,double);
	int getShapeCount();
	Shape();
	Shape(double, double);
	Shape(const double &x);
	~Shape();

};























#endif