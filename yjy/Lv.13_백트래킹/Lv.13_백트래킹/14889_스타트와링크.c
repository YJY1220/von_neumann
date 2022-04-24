//구글링 기회 2번
//2번째 풀 땐 구글링 기회 없이 풀도록
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int score[20][20];
int selected[20];
int n;
int ans = 100000001;
//차이 구하기
void count() 
{
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < n; i++)
	{
		if (selected[i] == 1)
		{
			for (int j = 0; j < n; j++)
			{
				if (selected[j] == 1)
				{
					cnt1 += score[i][j];
				}
			}
		}
		else 
		{
			for (int j = 0; j < n; j++) 
			{
				if (selected[j] == 0) 
				{
					cnt2 += score[i][j];
				}
			}
		}
	}

	int d = cnt1 > cnt2 ? cnt1 - cnt2 : cnt2 - cnt1;
	ans = ans > d ? d : ans;
}
//팀 나누기
void bt(int cnt, int idx)
{
	if (cnt == n / 2) 
	{
		count();
	
		return;
	}
	if (idx == n)
	{
		return;
	}
	
	selected[idx] = 1;
	bt(cnt + 1, idx + 1);
	selected[idx] = 0;
	bt(cnt, idx + 1);
}

int main(void)
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	bt(0, 0);
	printf("%d", ans);

	return 0;
}