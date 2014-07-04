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



#endif /* CAR_H_ */
