//reference return example 3

#include <iostream>
using namespace std;

int RefRetFuncOne(int &ref)
{
	ref++;
//참조자를 반환하지만 반환형이 기본자료형 int이기 때문에 참조자가
//참조하는 변수의 값이 반환된다.
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}
