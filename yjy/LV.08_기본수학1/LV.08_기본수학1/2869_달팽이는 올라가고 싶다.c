#include <stdio.h>

int main() {

	int A, B, V;
	int day, almost, answer, howmany;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &V);

	if (A == V) { // ���� �ö󰡾ߵǴ� �Ÿ��� ���� ������ �� �� �ִ� �Ÿ��� ���ٸ�
		printf("%d", 1); // �Ϸ縸�� �� �� �ִ�.
		return 0;
	}

	day = A - B; // ���� �㵿�� �� �� �ִ� �Ÿ�
	almost = V - A;// �� �Ÿ����� ���� ������ ������ �����̴� �����Ѵ�.
	if (almost % day) // almost�� �Ÿ����� ���µ� �ɸ��� �ð��� ���Ҷ� �������� �ȳ����� �Ϸ� �� �߰�
		howmany = (almost / day) + 1;
	else
		howmany = almost / day;

	answer = howmany + 1; // ���� �����Ϸ��� �Ϸ簡 �� �ɸ���

	printf("%d\n", answer);

	return 0;
}