//참조자는 무조건 선언과 동시에 변수를 참조하도록 해야 한다.
//그런데 여기서 말하는 변수의 범위에는 배열의 요소도 포함된다.

#include <iostream>

using namespace std;

int main(void)
{
	int arr[3] = {1, 3, 5};
	int &ref1 = arr[0];
	int &ref2 = arr[1];
	int &ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	return 0;
}
