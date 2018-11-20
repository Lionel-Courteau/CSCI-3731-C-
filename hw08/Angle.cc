#include "Angle.h"
#include <cstudio>
#include <cmath>

Angle::Angle(double d){
	this->d = d;
}

Angle::~Angle{
	
}

double Angle::getD() const{
	return d;
}

void Angle::setD(double d){
	d = d -int(d/360)*360.0
	if(d<0) d += 360.0;
	this->d=d;
}

double Angle::getSin() const{
	if(!haveSin){
		sin_val = d*M_PI/180.0;
		haveSin = true;
	}
	return sin_val;
}

double Angle::getCos() const{
	if(!haveCos){
		cos_val = d*M_PI/180.0;
		haveCos = true;
	}
	return cos_val;
}

Angle::operator+ (const Angle& x) const{
	Angle value;
	value.set_d(d+x.d);
	return value;
}

Angle::operator- (const Angle& x) const{
	Angle value;
	value.set_d(d-x.d);
	return value;
}

Angle::operator* (const Angle& x) const{
	Angle value;
	value.set_d(d*x);
	return value;
}

Angle::operator/ (const Angle& x) const{
	Angle value;
	value.set_d(d/x);
	return value;
}

Angle::operator+= (const Angle& x){
	this->d += x;
}

Angle::operator-= (const Angle& x){
	this->d -= x;
}

Angle::operator*= (const Angle& x){
	this->d *= x;
}

Angle::operator/= (const Angle& x){
	this->d /= x;
}

