//Question 02-2
//page 90

#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;

	//포인터를 선언해서 위 변수를 가리키게 해 보자.
//	int *ptr;
//	ptr = &num;  //이걸 어떻게 하는지 모르겠네요~~~
	const int *ptr = &num;

	//그리고 이 포인터 변수를 참조하는 참조자를 선언하자
//	int *(&pref) = ptr; // 이것도 틀렸네...... 상수화된 변수의 참조자 선언은 다음과 같아야 함.
	const int *(&pref) = ptr;


	//마지막으로 이렇게 선언된 포인터 변수와 참조자를 이용해서
	//num값을 출력하는 예제.
	cout << "from pointer: " << *ptr << endl;
	cout << "from reference: " << *pref << endl;

	return 0;
}

