#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	
	while (1)
	{
		scanf("%d %d", &a, &b);
		
		if (a == 0 && b == 0)//NULL로 하면 컴파일 에러 남
		{
			return 0;
		}

		printf("%d\n", a + b);
	}
	return 0;
}