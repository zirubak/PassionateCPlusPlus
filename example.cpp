//Question 02-3
//page 95

#include <iostream>

using namespace std;

typedef struct _Point{
	int xpos;
	int ypos;
} Point;

//위의 구조체를 기반으로 두 점의 합을 계산하는 함수를 다음의 형태로 정의하고
//덧샘의 결과는 함수의 반환을 통해서 얻게 한다.

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *rtn = new Point;

	rtn->xpos = p1.xpos + p2.xpos;
	rtn->ypos = p1.ypos + p2.ypos;

	return *rtn;
}

int main(void)
{
//	Point *rtn = new Point;
	Point *ptr1 = new Point;
	Point *ptr2 = new Point;

	ptr1->xpos = 3;
	ptr1->ypos = 30;

	ptr2->xpos = 70;
	ptr2->ypos = 7;

	Point &rtn = PntAdder(*ptr1, *ptr2);

	cout << "[" << rtn.xpos << "," << rtn.ypos << "]" << endl;

	delete ptr1;
	delete ptr2;
	delete &rtn;	//이건 좀더 생각해 보자.. 왜 이렇게 해야 하는지.

	return 0;
}
