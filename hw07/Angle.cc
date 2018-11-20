#include "Angle.h"
#include <cstudio>
#include <math.h>



Angle Angle::set_d(double d){
	d = d -int(d/360)*360.0
	if(d<0) d += 360.0;
	this->d=d;
}

double Angle::get_d() const{
	return d;
}

void Angle::set_d(double d){
	d = d -int(d/360)*360.0
	if(d<0) d += 360.0;
	this->d=d;
}

double Angle::get_sin() const{
	return sin(d*M PI/180.0);
}

double Angle::get_cos() const{
	return cos(d*M PI/180.0);
}

Angle Angle::operator+ (const Angle& x) const{
	Angle value;
	value.set_d(d+x.d);
	return value;
}

Angle Angle::operator- (const Angle& x) const{
	Angle value;
	value.set_d(d-x.d);
	return value;
}

Angle Angle::operator* (const Angle& x) const{
	Angle value;
	value.set_d(d*x);
	return value;
}

Angle Angle::operator/ (const Angle& x) const{
	Angle value;
	value.set_d(d/x);
	return value;
}

Angle Angle::operator+= (const Angle& x){
	Angle value;
	value.set_d(d+=x);
	return value;
}

Angle Angle::operator-= (const Angle& x){
	Angle value;
	value.set_d(d-=x);
	return value;
}

Angle Angle::operator*= (const Angle& x){
	Angle value;
	value.set_d(d*=x);
	return value;
}

Angle Angle::operator/= (const Angle& x){
	Angle value;
	value.set_d(d/=x);
	return value;
}