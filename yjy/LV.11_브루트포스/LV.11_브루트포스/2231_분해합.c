#include <stdio.h>

int main() {
    int N, tmp, digit = 0, generator = 0;
    scanf("%d", &N);
    tmp = N;

    //�ڸ��� ���ϱ�
    while (tmp > 0) {
        tmp /= 10;
        digit++;
    }

    //�ּҹ��� ���ϱ�
    tmp = N;
    tmp = tmp - digit * 9;
    if (tmp < 0) tmp = 0;

    //������ ã��
    int num, sum = 0;
    for (int i = tmp; i <= N; i++) {
        num = i;
        //���� �� ���ϱ�
        sum += num;
        //�� �ڸ��� ���ϱ�
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        //�����ڸ� ã���� �����ϰ� break
        if (sum == N) {
            generator = i;
            break;
        }
        sum = 0;
    }
    //������
    printf("%d\n", generator);
    return 0;
}
