#include <iostream>
using namespace std;

class Car
{
private:
	int gaslineGauage;

public:
	Car() : gaslineGauage(0)
	{

	}

	Car(int gas) : gaslineGauage(gas)
	{

	}


	int GetGasGauage()
	{
		return gaslineGauage;
	}
};

class HybirdCar : public Car
{
private:
	int electricGauge;

public:
	HybirdCar() : electricGauge(0)
	{

	}

	HybirdCar(int electric) : electricGauge(electric)
	{

	}

	HybirdCar(int electric, int gas) : electricGauge(electric), Car(gas)
	{

	}

	int GetElecGauage()
	{
		return electricGauge;
	}
};

class HybirdWaterCar : public HybirdCar
{
private:
	int waterGauage;

public:
	HybirdWaterCar() : waterGauage(0)
	{

	}

	HybirdWaterCar(int water) : waterGauage(water)
	{

	}

	HybirdWaterCar(int water, int electric) : waterGauage(water), HybirdCar(electric)
	{

	}

//	HybirdWaterCar(int water, int electric, int gas) : waterGauage(water), HybirdCar(electric), Car(gas)  // HybirdCar(electric) 라고 한 부분이 틀림
	HybirdWaterCar(int water, int electric, int gas) : waterGauage(water), HybirdCar(electric, gas)
	{

	}

	void ShowCurrentGauge()
	{
		cout << "remain water: " << waterGauage << endl;
		cout << "remain electric: " << GetElecGauage() << endl;
		cout << "remain gas: " << GetGasGauage() << endl;
	}
};


int main(void)
{
	HybirdWaterCar car1(50, 90, 10);
	car1.ShowCurrentGauge();

	return 0;
}
















