#ifndef FISH_H
#define FISH_H
#include "Angle.h"
#include <iostream>

class Fish{
	private:
		double x;
		double y;
		double speed;
		Angle direction;
		Angle tRate;
		
		
	public:
		Fish(double x, double y, double speed);
		virtual ~Fish();
		Swim();
		
		
		double getSpeed() const;
		Angle getDirection() const;
		Angle getTRate() const;
		
		
		
		void setSpeed();
		void setDirection();
		void setTRate();
};
#endif