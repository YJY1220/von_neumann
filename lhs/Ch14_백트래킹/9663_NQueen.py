import sys

N = int(sys.stdin.readline().rstrip())
cnt = 0
row = [False] * N
col = [False] * N
pdiag = [False] * (N * 2 - 1)
mdiag = [False] * (N * 2 - 1)


def queen_board(N, level):
    global cnt, row, col, pdiag, mdiag
    if level == N:
        cnt += 1
        return
    for i in range(N):
        if not row[level] and not col[i] and not pdiag[level + i] and not mdiag[N - 1 + level - i]:
            row[level], col[i], pdiag[level + i], mdiag[N - 1 + level - i] = True, True, True, True
            queen_board(N, level + 1)
            row[level], col[i], pdiag[level + i], mdiag[N - 1 + level - i] = False, False, False, False


queen_board(N, 0)
print(cnt)
