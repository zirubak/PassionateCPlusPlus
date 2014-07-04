/*
 * Car.cpp
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

//class definition에 해당하는 다음 함수의 정의는 다른 문장의 컴파일에 필요한 정보를 가지고 있지 않다.
//따라서 함수의 정의는 컴파일 된 이후에 링커에 의해 하나의 실행 파일로 묶이기만 하면 된다.


#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(char *ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
}



void Car::Accel()
{
	if(fuelGauge <= 0)
		return;
	else
		fuelGauge -= CA_CONST::FUEL_STEP;

	if(curSpeed + CA_CONST::ACC_STEP >= CA_CONST::MAX_SPD)
	{
		curSpeed = CA_CONST::MAX_SPD;
		return;
	}

	curSpeed += CA_CONST::ACC_STEP;
}



