#include <iostream>

int val = 100;

int simple(void)
{
	int val = 20;
	val += 3; // 지역변수 val의 값 3 증가
	::val += 7; // 전역변수 val의 값 7 증가
	return val;
}

int main(void)
{
	std::cout << val << std::endl;
	std::cout << simple() << std::endl;
	std::cout << val << std::endl;
	return 0;
}
