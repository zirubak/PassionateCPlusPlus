//new는 malloc을 대신하는 키워드이고
//delete는 free 함수를 대신하는 키워드이다.

#include <iostream>
#include <string.h>
//#include <stdlib.h>

using namespace std;

char* MakeStrAdr(int len)
{
//	char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
//	free(str);
	delete []str;

	return 0;
}
