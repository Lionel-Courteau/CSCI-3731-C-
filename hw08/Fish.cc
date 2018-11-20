#include "Fish.h"

Fish::Fish(double x, double y, double speed){
	this->x = x;
	this->y = y;
	this->speed = speed;
	:Angle direction(0);
	:Angle tRate = 0;
}

Fish::Swim(){
	int choice = rand() % 3;
	if( choice == 0) direction -= turn_rate; 
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos(); 
	y += speed * direction.getSin(); 
	 
}

Fish::~Fish{
	
}