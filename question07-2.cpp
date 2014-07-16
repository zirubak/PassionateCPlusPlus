#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;

public:
	MyFriendInfo(char* myName, int myAge)
		:age(myAge)
	{
		name = new char[strlen(myName)+1];
		strcpy(name, myName);
	}

	~MyFriendInfo()
	{
		delete []name;
	}

	void ShowMyFriendInfo()
	{
		cout << "name:" << name << endl;
		cout << "age: " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;

public:
	MyFriendDetailInfo(char* myAddr, char* myPhone, char* myName, int myAge)
		:MyFriendInfo("JH", 21)
	{
		addr = new char[strlen(myAddr)+1];
		phone = new char[strlen(myPhone)+1];

		strcpy(addr, myAddr);
		strcpy(phone, myPhone);
	}

	~MyFriendDetailInfo()
	{
		delete []addr;
		delete []phone;
	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "address: " << addr << endl;
		cout << "number: " << phone << endl << endl;
	}
};


int main(void)
{
	MyFriendDetailInfo myFriend("San Diego", "858-210-5171", "JH Baek", 38);
	myFriend.ShowMyFriendDetailInfo();

	return 0;
}
