/*
 * PassObjCopycon.cpp
 *
 *  Created on: Jul 13, 2014
 *      Author: jh
 */

//복사 생성자가 호출되는 시점은 크게 세가지로 구분 할 수 있다.
//1. 기존의 생성된 객체를 이용해서 새로운 객체를 초기화 하는 경우
//2. call-by-value 방식의 함수 호출 과정에서 객체를 인자로 전달하는 경우
//3. 객체를 반환하되, 참조형으로 반환하지 않는 경우

//이들의 공통점은 "객체를 새로 생성해야 한다, 단, 생성과 동시에 자료형의 객체로 초기화해야 한다."


#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SoSimpleFunObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SoSimpleFunObj(obj);
	cout << "함수 호출 후" << endl;
	return 0;
}
