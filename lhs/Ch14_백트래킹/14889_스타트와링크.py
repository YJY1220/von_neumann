import sys
from itertools import combinations

N = int(sys.stdin.readline().rstrip())
arr = []
min_val = sys.maxsize
for i in range(N):
    arr.append(list(map(int, sys.stdin.readline().rstrip().split())))

#
# def calculate():
#     global N, arr, picked
#     set1, set2 = 0, 0
#     whole = set([i for i in range(1, N + 1)])
#     not_picked = list(whole - picked)
#     lpicked = list(picked)
#     len_p = len(lpicked)
#     len_not_p = len(not_picked)
#     for i in range(len_p):
#         for j in range(len_p):
#             set1 += arr[lpicked[i] - 1][lpicked[j] - 1]
#
#     for i in range(len_not_p):
#         for j in range(len_not_p):
#             set2 += arr[not_picked[i] - 1][not_picked[j] - 1]
#
#     return abs(set1 - set2)
#
#
# def func(num, v):
#     global arr, picked, min_val, N
#     if len(picked) == num:
#         print(picked)
#         n = calculate()
#         if min_val > n:
#             min_val = n
#         return
#     for i in range(v, N + 1):
#         if i not in picked:
#             picked.add(i)
#             func(num, i + 1)
#             picked.remove(i)


whole = [i for i in range(2, N + 1)]
for i in range(N // 2 + 1):
    comb = list(combinations(whole, i))
    len_comb = len(comb)
    for j in range(len_comb):
        picked = list(comb[j])
        not_picked = list(set(whole) - set(picked))
        set1, set2 = 0, 0
        for a in range(len(picked)):
            for b in range(len(picked)):
                set1 += arr[picked[a] - 1][picked[b] - 1]
        for c in range(len(not_picked)):
            for d in range(len(not_picked)):
                set2 += arr[not_picked[c] - 1][not_picked[d] - 1]
        print(picked,set1,set2)
        n = abs(set1 - set2)
        if min_val > n:
            min_val = n

print(min_val)
