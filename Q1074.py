n = int(input())

nums = [int(input()) for _ in range(n)]

for n in nums:
    if n == 0:
        print("NULL")
        continue

    if n % 2 == 0:
        print("EVEN", end=" ")
    if n % 2 == 1:
        print("ODD", end=" ")
    
    if n > 0:
        print("POSITIVE")
    if n < 0:
        print("NEGATIVE")
    