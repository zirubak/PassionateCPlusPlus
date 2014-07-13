/*
 * SelfRef.cpp
 *
 *  Created on: Jul 12, 2014
 *      Author: jh
 */

#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n)
		: num(n)
	{
		cout << "객체 생성" << endl;
	}

	SelfRef& Adder(int n)
	{
		this->num += n;
		//아래 라인은 이 문장을 실행하는 객체 자신의 포인터가 아닌
		//객체 자신을 반환하겠다는 의미가 된다.
		//그런데 반환형이 참조형 SelfRef&으로 선언되었다. 따라서 객체 자신을 참조할 수있는
		// 참조의 정보(참조값)이 반환된다.
		return *this;
	}

	SelfRef& ShowTwoNumber()
	{
		cout << this->num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	//아래 문장은 두 함수 adder와 ShowTwoNumber가 객체의 참조 값을 반환하기 때문에 구성이 가능한 문장이다.
	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();


	return 0;
}



