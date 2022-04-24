import sys
from itertools import permutations

N, M = map(int, sys.stdin.readline().rstrip().split())
queue = []


def combination_with_rep(N, num, pre):
    global M, queue
    if num > M:
        for i in queue:
            print(i, end=' ')
        print()
        return

    for i in range(pre, N + 1):
        queue.append(i)
        combination_with_rep(N, num + 1, i)
        del queue[-1]


combination_with_rep(N, 1, 1)
