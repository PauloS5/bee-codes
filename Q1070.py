num = int(input())

if num % 2 == 0:
    num += 1

for x in range(6):
    print(num + ((x)*2))