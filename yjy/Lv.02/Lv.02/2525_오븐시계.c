#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;
	int H, M;
	scanf("%d %d\n %d", &A, &B, &C);

	if (B + C >= 60)
	{
		H = A + ((B + C) / 60) ;
		if (H == 24)
		{
			H = 0; // H에 0을 대입하라는 뜻이니까 = 넣어야함. ==아님
		}
		else //주의점 : H가 25나 26 등이 되는 경우도 생각, 0 아님
		{
			if (H > 24)
			{
				H = H - 24;
			}
		}
		M = B + C - 60 * ((B+C)/60);
	}
	else
	{
		H = A;
		M = B + C;
	}

	printf("%d %d", H, M);

	return 0;
}