/*
 * cal.cpp
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

#include <iostream>
#include "cal.h"

using namespace std;

float Calculator::Add(float a, float b)
{
	countAdd++;
	return a + b;
}

float Calculator::Sub(float a, float b)
{
	countSub++;
	return a - b;
}

float Calculator::Multiple(float a, float b)
{
	countMultiple++;
	return a * b;
}

float Calculator::Div(float a, float b)
{
	countDiv++;
	return a / b;
}

void Calculator::initMemberValue()
{
	countAdd = 0;
	countSub = 0;
	countMultiple = 0;
	countDiv = 0;
}

void Calculator::ShowOpCount()
{
	cout << "덧셈: " << countAdd << " 뺄셈: " << countSub \
			<< " 곱셈: " << countMultiple << " 나눗셈: " << countDiv << endl;
}

