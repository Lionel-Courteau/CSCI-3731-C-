#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{
	private:
		double x;
		double y;
		
	public:
		Point(double x, double y);
		
		double getX() const;
		double getY() const;
		
		void setX();
		void setY();
};
#endif