#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	//이 EOF 때문에 구글링 찬스 한 번 사용함
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
	return 0;
}