#include <stdio.h>
#define PI 3.14159265359
int main(void)
{
    int r;
    double result1, result2;

    scanf("%d", &r);
    result1 = (double)r * r * PI; //유클리드 기하학
    result2 = (double)r * r * 2;  //택시 기하학

    printf("%.6lf\n%.6lf", result1, result2);
    return 0;
}