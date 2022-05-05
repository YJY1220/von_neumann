import sys

T = int(sys.stdin.readline().rstrip())


def gcd(a, b):
    while a != 0:
        if a < b:
            a, b = b, a
        a %= b

    return b


for t in range(T):
    A, B = map(int, sys.stdin.readline().rstrip().split())
    g = gcd(A, B)
    print(g * (A // g) * (B // g))
