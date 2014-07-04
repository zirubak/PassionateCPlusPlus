/*
 * main.cpp
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

#include <iostream>
#include "cal.h"

using namespace std;

int main(void)
{
	Calculator cal; // make object

	cal.initMemberValue();

	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Sub(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;

	cal.ShowOpCount();

	return 0;
}


