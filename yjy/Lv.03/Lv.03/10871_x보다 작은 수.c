#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, x;
	int A[10001];//x�� 10000���ϴϱ� ���ڰ� 10000���ϱ��� ����
	             //���������� �ű���� �����ؾ���
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