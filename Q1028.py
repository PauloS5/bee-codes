from math import gcd

n = int(input())

R = ""
for _ in range(n):
    a, b = map(int, input().split())
    R += str(gcd(a, b)) + "\n"

print(end=R)