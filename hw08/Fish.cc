#include "Fish.h"

Fish::Fish(double x, double y, double speed){
	:Point location(0, 0);
	speed = 0;
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