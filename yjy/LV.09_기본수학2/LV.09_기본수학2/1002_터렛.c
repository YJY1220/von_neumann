#include <stdio.h>
#include <math.h>

int main() {
	int t, x1, y1, r1, x2, y2, r2;
	double d;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = pow(x1 - x2, 2) + pow(y1 - y2, 2);
		if (pow(r1 + r2, 2) > d && d != 0) {
			if (pow(r1 - r2, 2) < d)
				printf("2\n");
			else if (pow(r1 - r2, 2) == d)
				printf("1\n");
			else if (pow(r1 - r2, 2) > d)
				printf("0\n");
		}
		else if (pow(r1 + r2, 2) == d && d != 0) {
			printf("1\n");
		}
		else if (pow(r1 + r2, 2) < d && d != 0) {
			printf("0\n");
		}
		else if (d == 0 && r1 == r2)
			printf("-1\n");
		else if (d == 0 && r1 != r2)
			printf("0\n");
	}
}