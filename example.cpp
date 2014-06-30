#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple." << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;
	HybFunc();
	return 0;
}
