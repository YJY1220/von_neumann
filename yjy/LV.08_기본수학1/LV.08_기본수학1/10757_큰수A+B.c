#include <stdio.h>
#include <string.h>

char a[10001];
char b[10001];
int ans[10001]; 
int a_len, b_len;

int main() {


    scanf("%s %s", a, b);

    a_len = strlen(a) - 1;
    b_len = strlen(b) - 1;

    int x, y, temp, c = 0;

    while (a_len >= 0 || b_len >= 0) {

        x = (a_len >= 0) ? (a[a_len] - '0') : 0;
        y = (b_len >= 0) ? (b[b_len] - '0') : 0;

        temp = ans[c] + x + y; // 올림값이 없다면 0 + x + y가 되고, 있다면 올림값 + x + y가 되는것.
        ans[c] = temp % 10;
        ans[c + 1] = temp / 10;

        c++;
        a_len--;
        b_len--;
    }

    // 마지막 덧셈=맨 앞자리 덧셈의 올림여부에 대한 처리.
    if (ans[c] == 0)
        c--;

    // 뒤에서부터 출력.
    for (; c >= 0; c--)
        printf("%d", ans[c]);
}
