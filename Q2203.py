from math import sqrt

R = ""
while True:
    try:
        Xf, Yf, Xi, Yi, Vi, R1, R2 = map(int, input().split())

        dist = sqrt((Xi - Xf)**2 + (Yi - Yf)**2)

        if R1+R2 >= dist+(1.5*Vi):
            R += "Y\n"
        else:
            R += "N\n"
            
    except EOFError:
        break

print(end=R)