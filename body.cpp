/*
 * body.cpp
 *
 *  Created on: Jun 29, 2014
 *      Author: jh
 */

#include <iostream>
#include "def.h"

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

