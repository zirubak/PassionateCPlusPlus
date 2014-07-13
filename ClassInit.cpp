/*
 * ClassInit.cpp
 *
 *  Created on: Jul 12, 2014
 *      Author: jh
 */

#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2)
		:num1(n1), num2(n2)
	{

	}

	//이러한 생성자를 가르켜 복자 생성자(copy constructor)라 부른다.
	//copy constructor는 일반 constructor가 호출되는 시점이 다른
	//일반 생성자와 차이가 있기 때문에 붙은 것이다.
	//즉, copy constructor 를 이해하기 위해서는 복사 생성자의 호출 시점을
	//확실히 이해 해야 한다.
	SoSimple(const SoSimple &copy)
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15,30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;	//SoSimple sim2(sim1)으로 자동적으로 변환
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();

	return 0;
}
