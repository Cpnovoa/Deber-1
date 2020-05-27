/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Christian Novoa										  *
* Modified: martes, 26 de mayo de 2020 05:03:27 p. m.			  *
* NRC: 6396                                                       *
******************************************************************/
#include "Fraction.h"
#include "Formula.h"

 ////////////////////////////////////////////////////////////////////////
 // Name:       Formula::getNum1()
 // Purpose:    Implementation of Formula::getNum1()
 // Return:     float
 ////////////////////////////////////////////////////////////////////////

float Formula::getNum1(void)
{
	return num1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum1(float newNum1)
// Purpose:    Implementation of Formula::setNum1()
// Parameters:
// - newNum1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum1(float newNum1)
{
	num1 = newNum1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum2()
// Purpose:    Implementation of Formula::getNum2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum2(void)
{
	return num2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum2(float newNum2)
// Purpose:    Implementation of Formula::setNum2()
// Parameters:
// - newNum2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum2(float newNum2)
{
	num2 = newNum2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getDen1()
// Purpose:    Implementation of Formula::getDen1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getDen1(void)
{
	return den1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setDen1(float newDen1)
// Purpose:    Implementation of Formula::setDen1()
// Parameters:
// - newDen1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setDen1(float newDen1)
{
	den1 = newDen1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getDen2()
// Purpose:    Implementation of Formula::getDen2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getDen2(void)
{
	return den2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setDen2(float newDen2)
// Purpose:    Implementation of Formula::setDen2()
// Parameters:
// - newDen2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setDen2(float newDen2)
{
	den2 = newDen2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::Formula()
// Purpose:    Implementation of Formula::Formula()
// Return:     
////////////////////////////////////////////////////////////////////////

Formula::Formula()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::~Formula()
// Purpose:    Implementation of Formula::~Formula()
// Return:     
////////////////////////////////////////////////////////////////////////

Formula::~Formula()
{
}