#include <iostream>
#include <cstring>

using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;	//매달 지불해야 하는 급여액

public:
	PermanentWorker(char* name, int money)
		:salary(money)
	{
		strcpy(this->name, name);
	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl;
	}
};
