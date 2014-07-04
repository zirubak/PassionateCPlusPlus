/*
 * main.cpp
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

#include <iostream>
#include "Printer.h"

using namespace std;

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++.");
	pnt.ShowString();
	return 0;
}


