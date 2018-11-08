#ifndef FISH_H
#define FISH_H

#include "Point.h"
#include "Angle.h"
#include <iostream>

class Fish{
	private:
		Point location;
		double speed;
		Angle direction;
		Angle tRate;
		
		
	public:
		Fish();
		Fish(Point location, double speed, Angle direction);
		virtual ~Fish();
		Swim();
		
		Point getLocation() const;
		double getSpeed() const;
		Angle getDirection() const;
		Angle getTRate() const;
		
		
		void setLocation();
		void setSpeed();
		void setDirection();
		void setTRate();
};
#endif