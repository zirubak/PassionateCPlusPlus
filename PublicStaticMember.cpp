#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main(void)
{
	//static member 변수가 객체 내에 존재하지 않음을 증명하는 내용임.
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;

	//아래와 같은 형태로 static 멤버 변수에 접근하는 것은 추천 하지 않는다.
	//멤버 변수에 접근하는 것과 같은 오해를 불러 일으키기 때문이다.
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}
