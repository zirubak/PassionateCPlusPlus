/*
 * Printer.cpp
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

#include <iostream>
#include "Printer.h"
#include <cstring>

using namespace std;

void Printer::SetString(char *s)
{
	strcpy(str, s);
}

void Printer::ShowString()
{
	cout << str << endl;
}


