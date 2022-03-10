#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);

	sum = (n / 10 + n % 10) % 10 + (n % 10) * 10;
	int cycle = 1;
	
	while (n != sum)
	{
		//if (n == sum) return 0;

		sum = (sum / 10 + sum % 10) % 10 + (sum % 10) * 10;
		cycle++;
	}

	printf("%d", cycle);

	return 0;  
	
}