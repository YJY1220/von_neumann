import sys

a, b = map(int, sys.stdin.readline().rstrip().split())


def gcd(a, b):
    while a != 0:
        if a < b:
            a, b = b, a
        a %= b

    return b


g = gcd(a, b)
print(g)
print(g * (a // g) * (b // g))
