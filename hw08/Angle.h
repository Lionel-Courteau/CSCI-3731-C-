#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>

class Angle{

private:
	double d;
	
public:
	Angle();
	
	double getD();
	void setD(double d);
	
	double get_sin();
	double get_cos();
	Angle operator+ (const Angle& x);
	Angle operator- (const Angle& x);
	Angle operator* (const Angle& x);
	Angle operator/ (const Angle& x);
	Angle operator+= (const Angle& x);
	Angle operator-= (const Angle& x);
	Angle operator*= (const Angle& x);
	Angle operator/= (const Angle& x);
	Angle(double d);
	virtual ~Angle();
	
	double getD() const;
	
};
#endif