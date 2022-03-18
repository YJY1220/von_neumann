#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10], max = -1000000, i =1, res = 0;
	for (i = 1; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			res = i;
		}
	}

	printf("%d\n%d", max, res);

}