#include <iostream>

namespace BestCom
{
	void simpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgCom
{
	void simpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestCom::simpleFunc();
	ProgCom::simpleFunc();
	return 0;
}
