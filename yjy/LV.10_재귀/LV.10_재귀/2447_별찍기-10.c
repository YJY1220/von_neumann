#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n;
	bool check;

	scanf("%d", &n); //3�� �ŵ������� �Է¹���

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) //���� ���� n*n
		{
			check = true; //�ϴ� �� �� ����
			for (int k = n; k > 1; k = k / 3) //3���� �������� ��, ���⼱ 27/3 �̴ϱ� 9*9�� �Ǿ��� ��
			{
				if (i % k >= (k / 3) && i % k < (k / 3) * 2) //ó���� 27, �̶� ���ΰ� 9�̻� 18�̸�, ���ΰ� 9�̻� 18�̸��̸� ������ ' '�̰���
					if (j % k >= (k / 3) && j % k < (k / 3) * 2) //���� ����
					{
						check = false; //�׷��� false�ε� �̰� ' '�̰���
						break; //k == 1�� �Ǵ� ���� for�� ����
							   //check ���� ������, �� �� *�̾��ٰ� ' '�̰� �ȴٴ� �� �ٷ� ����ϸ� �ȵǱ� ������ �����ϱ� ���ؼ���
					}
			}
			if (check == false)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}