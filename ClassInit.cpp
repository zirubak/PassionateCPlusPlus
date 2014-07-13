/*
 * ShallowCopyError.cpp
 *
 *  Created on: Jul 13, 2014
 *      Author: jh
 */

//디폴트 복사 생성자는 맴버 대 맴버의 복사를 진행한다. 그리고 이러한 방식의 복사를 가르켜 "얕은 복사"
//Shallow copy 라 하는데, 이는 맴버 변수가 힙의 메모리 공간을 참조하는 경우에 문제가 된다.

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}

	~Person()
	{
		delete []name;
		cout << "called destructor! " << endl;
	}
};

int main(void)
{
	Person man1("JH Baek", 38);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

}
