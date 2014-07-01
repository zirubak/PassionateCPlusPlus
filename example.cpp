#include <iostream>

using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	return 0;

}

//## result
//VAL: 3047
//REF: 3047
//VAL: 0x7fff0eb7e6c4
//REF: 0x7fff0eb7e6c4	num1과 num2의 주소값이 동일하다 이 결과에 주목해야 한다.
