#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%.9lf", a / (double)b);

	return 0;
}

//10^-9까지 오차허용 -> 거기까지 출력하면 ok