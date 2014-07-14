#include <iostream>
using namespace std;

class SoSimple
{
public:
	const static int simObjCnt = 100;
public:
	SoSimple()
	{
//		simObjCnt++;
	}
};
//int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << endl;

	return 0;
}
