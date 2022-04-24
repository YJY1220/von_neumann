import sys
from itertools import permutations

N, M = map(int, sys.stdin.readline().rstrip().split())
is_used = [False] * (N + 1)
queue = []


def combination(N, num, pre):
    global is_used, M, queue
    if num > M:
        for i in queue:
            print(i, end=' ')
        print()
        return

    for i in range(pre + 1, N + 1):
        if is_used[i]:
            continue
        is_used[i] = True
        queue.append(i)
        combination(N, num + 1, i)
        is_used[i] = False
        del queue[-1]


combination(N, 1, 0)
