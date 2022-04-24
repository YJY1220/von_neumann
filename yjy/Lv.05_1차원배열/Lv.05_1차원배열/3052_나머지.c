#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int data[]);

int main()
{
	int num, output[1001];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		output[i] = num % 42;
	}

	check(output);

	return 0;
}

int check(int data[])
{
	int cnt = 0;
	int res = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (data[i] == data[j])
			{
				res++;
			}
		}
		if (res == 0)
		{
			cnt++;
		}
	}

	printf("%d", cnt);
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//
//    int input, result = 0;
//    int remain[10];
//
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &input);
//        remain[i] = (input % 42);
//    }
//
//    for (int i = 0; i < 10; i++) {
//        int count = 0; // 초기화
//        for (int j = i + 1; j < 10; j++) { // 서로 같은 수일 경우
//            if (remain[i] == remain[j]) count++;
//        }
//        if (count == 0) result++; // 같은 수가 없을 경우 개수를 세준다
//    }
//
//    printf("%d", result);
//}