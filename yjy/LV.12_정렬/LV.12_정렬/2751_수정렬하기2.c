#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b)
{
    if (*(int*)a > *(int*)b)
    {
        return 1;
    }
    else if (*(int*)a < *(int*)b)
    {
        return -1;
    }
    else
        return 0;
}
int main()
{
    int N;
    int i;
    int* arr;
    scanf("%d", &N);
    arr = (int*)malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    qsort(arr, N, sizeof(int), compare);
    for (i = 0; i < N; i++)
        printf("%d\n", arr[i]);
    free(arr);
}

