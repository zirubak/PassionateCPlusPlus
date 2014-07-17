#include <iostream>
#include <cstring>

using namespace std;

class Computer
{
private:
	char owner[50];

public:
	Computer(char* name)
	{
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;

public:
	NotebookComp(char* NotebookName, int initChag)
		:Computer(NotebookName), Battery(initChag)
	{
	}

	void Charging()
	{
		Battery += 5;
	}

	void UseBattery()
	{
		Battery -= 1;
	}

	void MovingCal()
	{
		if(GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo()
	{
		return Battery;
	}
};

class TableNotebook : public NotebookComp
{
private:
	char regstPenModel[50];

public:
	TableNotebook(char* name, int initChag, char* pen)
		:NotebookComp(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}

	void Write(char* penInfo)
	{
		if(GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다" << endl;
			return;
		}

		if(strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}
		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("JH", 5);
	TableNotebook tn("Sung", 5, "TTTTTT");

	nc.MovingCal();
	tn.Write("TTTTTT");

	return 0;
}















