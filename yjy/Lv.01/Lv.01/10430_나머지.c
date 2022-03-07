#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ImStupid, YourStupid, WeStupid;
	scanf("%d %d %d", &ImStupid, &YourStupid, &WeStupid);

	int fir = (ImStupid + YourStupid) % WeStupid;
	int sec = ((ImStupid % WeStupid) + (YourStupid % WeStupid)) % WeStupid;
	int thr = (ImStupid * YourStupid) % WeStupid;
	int four = ((ImStupid % WeStupid) * (YourStupid % WeStupid)) % WeStupid;

	printf("%d\n%d\n%d\n%d", fir, sec, thr, four);

	return 0;
}