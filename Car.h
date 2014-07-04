/*
 * Car.h
 *
 *  Created on: Jul 4, 2014
 *      Author: jh
 */

// Car class와 관련된 문장의 컴파일 정보로 사용되는 클래스의 선언은 헤더 파일에 저장
// 컴파일러가 Car class와 관련된 문장의 오류를 잡아 내는데 필요한 최소한의 정보로서
// 클래스를 구성하는 외형적인 틀을 보여 준다.


#ifndef CAR_H_
#define CAR_H_

#include <iostream>
using namespace std;

namespace CA_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CA_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

inline void Car::ShowCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

inline void Car::Break()
{
	if(curSpeed < CA_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CA_CONST::BRK_STEP;
}

#endif /* CAR_H_ */
