/*
 * cal.h
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

#ifndef CAL_H_
#define CAL_H_

class Calculator
{
private:
	int countAdd;
	int countSub;
	int countMultiple;
	int countDiv;

public:
	float Add(float a, float b);
	float Sub(float a, float b);
	float Multiple(float a, float b);
	float Div(float a, float b);

	void initMemberValue();
	void ShowOpCount();
};

#endif /* CAL_H_ */
