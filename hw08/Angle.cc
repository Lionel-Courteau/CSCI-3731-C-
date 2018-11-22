#include "Angle.h"
#include <cstdio>
#include <cmath>

Angle::Angle(){
	d = 0;
}

Angle::Angle(double d){
	this->d = d;
}

Angle::~Angle(){
	
}

double Angle::getD() const{
	return d;
}

void Angle::setD(double d){
	d = d -int(d/360)*360.0;
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

Angle Angle::operator+ (const Angle& x) const{
	Angle value;
	value.setD(d+x.d);
	return value;
}

Angle Angle::operator- (const Angle& x) const{
	Angle value;
	value.setD(d-x.d);
	return value;
}

Angle Angle::operator* (const Angle& x) const{
	Angle value;
	value.setD(d*x.d);
	return value;
}

Angle Angle::operator/ (const Angle& x) const{
	Angle value;
	value.setD(d/x.d);
	return value;
}

 void Angle::operator+= (const Angle& x){
	this->d += x.d;
}

void Angle::operator-= (const Angle& x){
	this->d -= x.d;
}

void Angle::operator*= (const Angle& x){
	this->d *= x.d;
}

void Angle::operator/= (const Angle& x){
	this->d /= x.d;
}

