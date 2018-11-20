#ifndef ANGLE_H
#define ANGLE_H

class Angle{

private:
	double degree;
	
public:
	Angle(double degree);
	virtual ~Angle();
	
	double getDegree() const;
	
	void set(double degree);
	
};

#endif
	