#include <stdio.h>
#include <cmath>

void solve(int n, int from, int to) {
	if (n == 0) return; // ���� �� ������ ����

	int remain = 6 - from - to; // ���(1,2,3) ���� 6�̹Ƿ�

	solve(n - 1, from, remain);
	printf("%d %d\n", from, to);
	solve(n - 1, remain, to);
}

int main() {
	int n;
	scanf("%d", &n);

	int k = pow(2, n) - 1; // �̵� Ƚ�� : n �϶� 2^n - 1

	printf("%d\n", k);
	solve(n, 1, 3);

	return 0;
}