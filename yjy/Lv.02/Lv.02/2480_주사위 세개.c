//구글링 검색 찬스 한 번 사용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//소스코드 작성 시, if 다음에는 첫 if 경우를 제외한다는 걸 잘 생각할 것
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b)
	{
		printf("%d", 1000 + a * 100);
	}
	else if (b == c)
	{
		printf("%d", 1000 + b * 100);
	}
	else if (a == c)
	{
		printf("%d", 1000 + c * 100);
	}
	else
	{
		if (a > b && (b > c || c > b)) // 괄호친 거 차이가 뭐졍
		{
			printf("%d", a * 100);
		}
		else if (b > c && (c > a || a > c))
		{
			printf("%d", b * 100);
		}
		else
		{
			printf("%d", c * 100);
		}
	}

	return 0;
}