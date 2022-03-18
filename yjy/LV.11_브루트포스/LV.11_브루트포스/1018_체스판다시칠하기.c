#include <stdio.h>

int main() {
    int row, col; 
    char array[50][50];
    int min = 32; 

    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++) {
        scanf("%s", array[i]);
    }

    for (int i = 0; i < row - 7; i++) { // 가능한 세로 범위에서
        for (int j = 0; j < col - 7; j++) { // 가능한 가로 범위에서
            int count = 0;
            for (int s_i = i; s_i < i + 8; s_i++) {
                for (int s_j = j; s_j < j + 8; s_j++) {
                    count += (s_i + s_j) % 2 == 1 ^ array[s_i][s_j] == 'B'; // 다시 칠해야할 칸이 있으면 카운트
                }
            }
            count = 64 - count < count ? 64 - count : count; 
            min = count < min ? count : min; 
        }
    }

    printf("%d\n", min);
    return 0;
}