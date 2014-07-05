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


class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap &cap)
	{
		cap.Take();
	}

	void TakeSneezeCap(const SneezeCap &cap)
	{
		cap.Take();
	}

	void takeSnuffleCap(const SnuffleCap &cap)
	{
		cap.Take();
	}
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.takeSnuffleCap(ncap);

	return 0;
}









