#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;

public:
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}

	~SoBase()
	{
		cout << "~SoBase(): " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;

public:
	SoDerived(int n) : SoBase(n), derivNum(n)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}

	~SoDerived()
	{
		cout << "~SoDerived() : " <<  derivNum << endl;
	}
};

int main(void)
{
	SoDerived drv1(15);
	SoDerived drv2(17);

	return 0;
}

















