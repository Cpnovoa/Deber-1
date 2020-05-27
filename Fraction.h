/***********************************************************************
 * Module:  Fraction.h
 * Author:  Compus
 * Modified: martes, 26 de mayo de 2020 05:03:27 p. m.
 * Purpose: Declaration of the class Fraction
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Fraction_h)
#define __Class_Diagram_1_Fraction_h

class Fraction
{
public:
	float getResult1(void);
	void setResult1(float newResult1);
	float getResult2(void);
	void setResult2(float newResult2);
	Fraction();
	~Fraction();
	void calculate(float, float, float, float);

protected:
private:
	float result1;
	float result2;


};

#endif