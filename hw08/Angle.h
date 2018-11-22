#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>

class Angle{

private:
	double d;
	mutable double sin_val;
	mutable double cos_val;
	mutable bool haveSin;
	mutable bool haveCos;
	
public:
	
	Angle();
	Angle(double d);
	virtual ~Angle();
	
	double getD() const;
	void setD(double d);
	
	double getSin() const;
	double getCos() const;
	Angle operator+ (const Angle& x) const;
	Angle operator- (const Angle& x) const;
	Angle operator* (const Angle& x) const;
	Angle operator/ (const Angle& x) const;
	void operator+= (const Angle& x);
	void operator-= (const Angle& x);
	void operator*= (const Angle& x);
	void operator/= (const Angle& x);
	
	
};
#endif