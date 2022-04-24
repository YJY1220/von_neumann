#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int n, m, arr[9];
int check(int num, int t);
void dfs(int num);

int check(int num, int t)
{
	for (int i = 1; i < num; i++)
	{
		if (arr[i] == t)
		{
			return 1;
		}
	}
	return 0;
}

void dfs(int num)
{

	int t;

	for (t = 1; t <= n; t++)
	{
		if (num > m) return;
		if (check(num, t)) continue;

		arr[num] = t;

		if (num == m)
		{
			for (int i = 1; i <= m; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
		}

		dfs(num + 1);
	}
}

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		arr[i] = 0;
	}

	scanf("%d %d", &n, &m);

	dfs(1);

	return 0;
}