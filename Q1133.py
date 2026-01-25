a = int(input())
b = int(input())

for i in range(min(a, b)+1, max(a, b)):
    if ((i%5) == 2) or ((i%5) == 3):
        print(i)