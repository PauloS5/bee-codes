S = 0
den = 1 
num = 1 
while den <= 39:
    S += den/num
    den += 2
    num *= 2
print(f"{S:.2f}")