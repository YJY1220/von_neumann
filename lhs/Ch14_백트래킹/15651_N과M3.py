import sys
from itertools import permutations

N, M = map(int, sys.stdin.readline().rstrip().split())
queue = []


def permutation_with_rep(N, num):
    global M, queue
    if num > M:
        for i in queue:
            print(i, end=' ')
        print()
        return

    for i in range(1, N + 1):
        queue.append(i)
        permutation_with_rep(N, num + 1)
        del queue[-1]


permutation_with_rep(N, 1)
