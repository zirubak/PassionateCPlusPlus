/*
 * Destructor.cpp
 *
 *  Created on: Jul 8, 2014
 *      Author: jh
 */

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char *name;
	int age;

public:
	Person(char *myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
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
	Person woman("Heygene Seung", 34);
	man1.ShowPersonInfo();
	woman.ShowPersonInfo();
	return 0;
}


