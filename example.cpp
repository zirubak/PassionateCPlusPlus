/*
 * example.cpp
 *
 *  Created on: Jun 26, 2014
 *      Author: jh
 */


#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;

	std::cout << "정수 두개 입력: ";
	std::cin >> val1 >> val2;

	if(val1 < val2)
	{
		for(int i = val1+1; i < val2 ; i++)
		{
			result += i;
		}

		std::cout << "정수 두개 사이 값들의 합은: ";
		std::cout << result;
	}

	return 0;
}



