#include <iostream>
#include <cstring>

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

void Car::InitMembers(char *ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
}

void Car::ShowCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
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

void Car::Break()
{
	if(curSpeed < CA_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CA_CONST::BRK_STEP;
}

int main(void)
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}


