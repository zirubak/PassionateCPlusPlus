#include <iostream>

namespace BestCom
{
	void simpleFunc(void);

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
}

void ProgCom::simpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
