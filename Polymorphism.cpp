#include <iostream>
using namespace std;

class First
{
public:
	virtual void SimpleFunc()
	{
		cout << "First" << endl;
	}
};

class Second : public First
{
public:
	virtual void SimpleFunc()
	{
		cout << "Second" << endl;
	}
};

int main(void)
{
	First* ptr = new First();
	ptr->SimpleFunc(); //같은 모양 다른 결과
	delete ptr;

	ptr = new Second();
	ptr->SimpleFunc();//같은 모양 다른 결과
	delete ptr;

	return 0;
}
