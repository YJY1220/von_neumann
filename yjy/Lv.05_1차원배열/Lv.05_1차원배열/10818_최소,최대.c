//구글링찬스 한번 + 단순하게 생각하자..
//수정본은 왜 안되는지 이유를 notion에 기록해두기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, num, max = -100000000, min = 10000000;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		if (max < num)
		{
			max = num;
		}
		if (min > num)
		{
			min = num;
		}
	}

	printf("%d %d", min, max);

	return 0;

}



