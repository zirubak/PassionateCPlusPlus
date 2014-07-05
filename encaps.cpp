/*
 * encaps.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#include <iostream>
using namespace std;

//콧물 처치용 캡슐
class SinivelCap
{
public:
	void Take() const
	{
		cout << "콧물에 싹~ 났습니다." << endl;
	}
};

//재채기 처치용 캡슐
class SneezeCap
{
public:
	void Take() const
	{
		cout << "재채기가 멎습니다." << endl;
	}
};

//코막힘 처치용 캡슐
class SnuffleCap
{
public:
	void Take() const
	{
		cout << "코가 뻥 뚫립니다." << endl;
	}
};

//this class is created for encapsulation.
class CONTAC600
{
private:
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

public:
	void Take() const
	{
		scap.Take();
		zcap.Take();
		ncap.Take();
	}
};


class ColdPatient
{
public:
	void TakeCONTACT600(const CONTAC600 &cap)
	{
		cap.Take();
	}
};

int main(void)
{

	CONTAC600 cap;
	ColdPatient sufferer;

	sufferer.TakeCONTACT600(cap);

	return 0;
}









