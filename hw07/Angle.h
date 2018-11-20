#indef ANGLE_H
#define ANGLE_H

class Angle{

private:
	double d;
	
public:
	Angle();
	Angle Angle::set_d(double d);
	double Angle::get_d();
	void Angle::set_d(double d);
	double Angle::get_sin();
	double Angle::get_cos();
	Angle Angle::operator+ (const Angle& x);
	Angle Angle::operator- (const Angle& x);
	Angle Angle::operator* (const Angle& x);
	Angle Angle::operator/ (const Angle& x);
	Angle Angle::operator+= (const Angle& x);
	Angle Angle::operator-= (const Angle& x);
	Angle Angle::operator*= (const Angle& x);
	Angle Angle::operator/= (const Angle& x);
	Angle(double d);
	virtual ~Angle();
	
	double getD() const;
	
	void set(double d);
};
#endif