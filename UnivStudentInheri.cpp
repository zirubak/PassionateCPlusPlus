#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, char* myname)
		:age(myage)
	{
		strcpy(this->name, myname);
	}

	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout <<"My age is " << age << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];

public:
	UnivStudent(int myage, char* myname, char* mymajor)
		: Person(myage, myname)
	{
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is" << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1(38, "JH", "EE");
	ustd1.WhoAreYou();



	return 0;
}




















