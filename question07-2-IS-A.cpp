#include <iostream>
using namespace std;

class Rectagle
{
private:
	int width, height;

public:
	Rectagle(int myWidth, int myHeight)
		:width(myWidth), height(myHeight)
	{
	}

	void ShowAreaInfo()
	{
		int area = width * height;
		cout << "면적: " << area << endl;
	}
};

class Square : public Rectagle
{
private:

public:
	Square(int myWidth): Rectagle(myWidth,myWidth)
	{
	}
};

int main(void)
{
	Rectagle rec(4,3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	return 0;
}
