#include <stdio.h>

int main()
{
    int T;
    int N;
    int arr[20000] = { 0,1 };

    //�׽�Ʈ ���̽� ���� �Է¹ޱ�
    scanf("%d", &T);

    for (int l = 0; l < T; l++) {
        scanf("%d", &N);

        //N���� �Ҽ��� ���ϱ�
        for (int i = 2; i <= N; i++) {
            for (int j = 2; i * j <= N; j++) {
                arr[i * j] = 1;
            }
        }
        //index�� N/2���� ����
        for (int m = N / 2; m > 0; m--) {
            if (arr[m] != 1 && arr[N - m] != 1) {
                printf("%d %d\n", m, N - m);
                break;
            }
        }
    }

    return 0;
}