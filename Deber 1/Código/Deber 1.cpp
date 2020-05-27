/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Christian Novoa										  *
* Modified: martes, 26 de mayo de 2020 05:03:27 p. m.			  *
* NRC: 6396                                                       *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <sstream>
#include <stdlib.h>
#include "GetData.h"
#include "Formula.cpp"
#include "Fraction.cpp"

using namespace std;

int main()
{
	Formula objFormula;
	Fraction objFraction;
	GetNumberData objGetn;
	float a, b, c, d;
	string data;

	cout << "Ingrese los datos de las fracciones a/b; c/d" << endl;

	data = objGetn.read("Ingrese a: ");
	istringstream(data) >> a;
	objFormula.setNum1(a);

	data = objGetn.read("Ingrese b: ");
	istringstream(data) >> b;
	objFormula.setDen1(b);

	data = objGetn.read("Ingrese c: ");
	istringstream(data) >> c;
	objFormula.setNum2(c);

	data = objGetn.read("Ingrese d: ");
	istringstream(data) >> d;
	objFormula.setDen2(d);

	system("cls");
	objFraction.calculate(objFormula.getNum1(), objFormula.getDen1(),
		objFormula.getNum2(), objFormula.getDen2());

	system("pause");
	return 0;
}
