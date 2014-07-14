/*
 * NeedGlobal.cpp
 *
 *  Created on: Jul 13, 2014
 *      Author: jh
 */

#include <iostream>
using namespace std;

//int simObjCnt = 0;
//int cmxObjCnt = 0;

class SoSimple
{
private:
	static int simObjCnt; // static 멤버 변수, 클래스 변수 , static은 자동으로 초기화가 0으로 됨.

public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt; // static 멤버 변수, 클래스 변수 , static은 자동으로 초기화가 0으로 됨.

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();

	return 0;
}




