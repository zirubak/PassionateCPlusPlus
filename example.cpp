#include <iostream>

namespace BestCom
{
	void simpleFunc(void);

}

namespace BestCom
{
	void goodFunc(void);

}

namespace ProgCom
{
	void simpleFunc(void);

}

int main(void)
{
	BestCom::simpleFunc();
	ProgCom::simpleFunc();
	return 0;
}

void BestCom::simpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	goodFunc();
}

void BestCom::goodFunc(void)
{
	std::cout << "good 함수" << std::endl;
}

void ProgCom::simpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
