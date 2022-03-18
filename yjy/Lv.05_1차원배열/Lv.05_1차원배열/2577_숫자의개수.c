//구글링 찬스 한 번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, res = 0, size, cnt = 0;
	int arr[1001];

	scanf("%d %d %d", &a, &b, &c);
	res = a * b * c;
	
	for (int i = 0; i < arrLen(res); i++)
	{
		arr[i] = res % 10;
		res = res / 10;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < arrLen(res); j++)
		{
			if (i == arr[j])
			{
				cnt++;
			}
		}
		if (cnt == 0)
		{
			printf("0");
		}
		printf("%d\n", cnt);
	}
	 
	/*for (int i = 0; i < 10; i++)
	{
		num[i] = res  
	}*/

	return 0;
}

int arrLen(int num)
{
	int time= 0;

	while (num / 10 != 0)
	{
		num /= 10;
		++time;
		//time++;
	}
	return (time);
}