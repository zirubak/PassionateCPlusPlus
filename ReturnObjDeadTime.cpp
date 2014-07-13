#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}

	~SoSimple()
	{
		cout << "Destory obj: " << this << endl;
	}
};

SoSimple SoSimpleFunObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SoSimpleFunObj(obj);

	cout << endl;

	SoSimple tempRef = SoSimpleFunObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
