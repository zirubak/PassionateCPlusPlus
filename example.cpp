//길이 정보를 인자로 받아서 해당 길이의 문장열 저장이 가능한 배엵을 생성하고
//그 배열의 주소값을 반환하는 함수를 정의한다.

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);

	return 0;
}
