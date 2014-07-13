/*
 * PointerThis.cpp
 *
 *  Created on: Jul 12, 2014
 *      Author: jh
 */

//맴버 함수 내에서는 this라는 이름의 포인터를 사용 할 수 있는데 이는 객체 자신을 가르키는 용도로 사용되는
//포인터 이다.

#include <iostream>
#include <cstring>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n)
		:num(n)
	{
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}

	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple *ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}

