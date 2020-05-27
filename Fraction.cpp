 /******************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
 * CARRERA: Ingenieria de Software                                 *
 * SEMESTRE: Tercer semestre                                       *
 * MATERIA: Estructura de Datos									   *
 * Author:  Christian Novoa										   *
 * Modified: martes, 26 de mayo de 2020 05:03:27 p. m.			   *
 * NRC: 6396                                                       *
 ******************************************************************/

#include <iostream>
#include "Formula.h"
#include "Fraction.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::calculate()
// Purpose:    Implementation of Fraction::calculate()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraction::calculate(float num1, float den1, float num2, float den2)
{
	Fraction obj;
	Formula formula;

	obj.setResult1((num1 * den2) + (num2 * den1));
	obj.setResult2(den1 * den2);

	cout << "Resultado: " << endl;
	cout << num1 << "/" << den1 << " * "
		<< num2 << "/" << den2 << " = "
		<< obj.getResult1() << "/" << obj.getResult2() << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::getResult1()
// Purpose:    Implementation of Fraction::getResult1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraction::getResult1(void)
{
	return result1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::setResult1(float newResult1)
// Purpose:    Implementation of Fraction::setResult1()
// Parameters:
// - newResult1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraction::setResult1(float newResult1)
{
	result1 = newResult1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::getResult2()
// Purpose:    Implementation of Fraction::getResult2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraction::getResult2(void)
{
	return result2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::setResult2(float newResult2)
// Purpose:    Implementation of Fraction::setResult2()
// Parameters:
// - newResult2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraction::setResult2(float newResult2)
{
	result2 = newResult2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::Fraction()
// Purpose:    Implementation of Fraction::Fraction()
// Return:
////////////////////////////////////////////////////////////////////////

Fraction::Fraction()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraction::~Fraction()
// Purpose:    Implementation of Fraction::~Fraction()
// Return:
////////////////////////////////////////////////////////////////////////

Fraction::~Fraction()
{
}
