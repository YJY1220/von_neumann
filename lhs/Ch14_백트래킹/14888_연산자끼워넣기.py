import sys

N = int(sys.stdin.readline().rstrip())

numbers = list(map(int, sys.stdin.readline().rstrip().split()))
operator = list(map(int, sys.stdin.readline().rstrip().split()))
op_list = []
max_val = -sys.maxsize
min_val = sys.maxsize


def calculate(numbers, op_list):
    ans = numbers[0]
    for i in range(N - 1):
        if op_list[i] == 0:
            ans += numbers[i + 1]
        elif op_list[i] == 1:
            ans -= numbers[i + 1]
        elif op_list[i] == 2:
            ans *= numbers[i + 1]
        elif op_list[i] == 3:
            ans = ans * -1 // numbers[i + 1] * -1 if ans < 0 else ans // numbers[i + 1]
    return ans


def func(numbers, operator):
    global op_list, max_val, min_val
    if operator == [0, 0, 0, 0]:
        n = calculate(numbers, op_list)
        if max_val < n:
            max_val = n
        if min_val > n:
            min_val = n
        return
    for i in range(4):
        if operator[i] != 0:
            op_list.append(i)
            operator[i] -= 1
            func(numbers, operator)
            operator[i] += 1
            op_list.pop()


func(numbers, operator)
print(max_val)
print(min_val)
