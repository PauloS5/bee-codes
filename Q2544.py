from math import log2
R = ""
while True:
    try:
        n = int(input())
        
        R += str(int(log2(n))) + "\n"
    except EOFError:
        break

print(end=R)