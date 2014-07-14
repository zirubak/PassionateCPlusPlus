#include <iostream>
#include <cstring>

using namespace std;

class Girl;	//Girl이라는 이름이 클래스의 이름임을 알림

class Boy
{
private:
	int height;
	friend class Girl;	// Girl class에 대한 friend 선언

public:
	Boy(int len) : height(len)
	{
	}

	void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
	char phNum[20];

public:
	Girl(char* num)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfor(Boy &frn);

	friend class Boy;	//boy class에 대한 friend선언
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Girl's phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfor(Boy &frn)
{
	cout << "Boy's height: " << frn.height << endl;
}


int main(void)
{
	Boy boy(170);
	Girl girl("858-750-8448");

	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfor(boy);

	return 0;
}




