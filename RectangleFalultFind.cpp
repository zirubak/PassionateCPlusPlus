/*
 * RectangleFalultFind.cpp
 *
 *  Created on: Jul 5, 2014
 *      Author: jh
 */

#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

int main(void)
{
	Point pos1;
	if(!pos1.InitMembers(-2,4))
		cout << "input error." << endl;

	if(!pos1.InitMembers(2,4))
		cout << "input error." << endl;

	Point pos2;
	if(!pos2.InitMembers(5,9))
		cout << "input error." << endl;

	Rectangle rec;
	if(rec.InitMembers(pos2, pos1))
		cout << "init failure." << endl;
	if(rec.InitMembers(pos1, pos2))
		cout << "init failure." << endl;

	rec.ShowRecInfo();
	return 0;
}





