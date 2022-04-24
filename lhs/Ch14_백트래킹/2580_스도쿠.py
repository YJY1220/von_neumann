import sys

sudoku = []
zero_list = []
idx = 0
for i in range(9):
    arr = list(map(int, sys.stdin.readline().rstrip().split()))
    for j in range(9):
        if arr[j] == 0:
            zero_list.append((i, j))
    sudoku.append(arr)

N = len(zero_list)
zero_list.append((-1, -1))


def check(sudoku, x, y, k):
    for i in range(9):
        if i != y and sudoku[x][i] == k:
            return False
        if i != x and sudoku[i][y] == k:
            return False
        if i != x % 3 * 3 + y % 3 and sudoku[x // 3 * 3 + i // 3][y // 3 * 3 + i % 3] == k:
            return False
    return True


def fill_sudoku(sudoku, x, y):
    global idx, zero_list, N

    if idx >= N:
        for i in range(9):
            for j in range(9):
                print(sudoku[i][j], end=' ')
            print()
        exit(0)

    for i in range(1, 10):
        if check(sudoku, x, y, i):
            sudoku[x][y] = i
            idx += 1
            fill_sudoku(sudoku, zero_list[idx][0], zero_list[idx][1])
            idx -= 1
    sudoku[x][y] = 0


fill_sudoku(sudoku, zero_list[0][0], zero_list[0][1])
