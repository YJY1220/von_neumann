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
			H = 0; // H�� 0�� �����϶�� ���̴ϱ� = �־����. ==�ƴ�
		}
		else //������ : H�� 25�� 26 ���� �Ǵ� ��쵵 ����, 0 �ƴ�
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