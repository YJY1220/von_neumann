#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dx, dy;
	scanf("%d\n %d", &dx, &dy);

	if (dx > 0 && dy > 0)
	{
		printf("1");
	}
	else if (dx > 0 && dy < 0)
	{
		printf("4");
	}
	else if (dx < 0 && dy>0)
	{
		printf("2");
	}
	else
	{
		if (dx < 0 && dy < 0)
		{
			printf("3");
		}
	}

	return 0;
}