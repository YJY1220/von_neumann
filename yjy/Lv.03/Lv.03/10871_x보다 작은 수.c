#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, x;
	int A[10001];//x가 10000이하니까 숫자가 10000이하까지 가능
	             //수열범위가 거기까지 가능해야함
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int j = 0; j < n; j++)
	{
		if (A[j] < x)
		{
			printf("%d", A[j]);
			printf(" ");
		}
	}
	

	return 0;
}