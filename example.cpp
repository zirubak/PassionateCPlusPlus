// problem 02-1
// problem 3

#include <iostream>

using namespace std;

void SwapByRef2(int *(&ref1), int *(&ref2))
{
	int *temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	cout << "Before:" << endl;
	cout << "val1: " << *ptr1 << endl;
	cout << "val2: " << *ptr2 << endl;

	SwapByRef2(ptr1, ptr2);

	cout << "After:" << endl;
	cout << "val1: " << *ptr1 << endl;
	cout << "val2: " << *ptr2 << endl;

	return 0;
}
