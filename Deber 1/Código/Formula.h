/***********************************************************************
 * Module:  Formula.h
 * Author:  Compus
 * Modified: martes, 26 de mayo de 2020 04:44:08 p. m.
 * Purpose: Declaration of the class Formula
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Formula_h)
#define __Class_Diagram_1_Formula_h

class Fraction;

class Formula
{
public:
	float getNum1(void);
	void setNum1(float newNum1);
	float getNum2(void);
	void setNum2(float newNum2);
	float getDen1(void);
	void setDen1(float newDen1);
	float getDen2(void);
	void setDen2(float newDen2);
	Formula();
	~Formula();

	Fraction* fraction;

protected:
private:
	float num1;
	float num2;
	float den1;
	float den2;


};

#endif
