c, d = input().split()

cx, cy = list(c)
dx, dy = list(d)

cx = ord(cx)-96
dx = ord(dx)-96
cy = int(cy)
dy = int(dy)

if (abs(cx-dx)==2 and abs(cy-dy)==1) ^ (abs(cx-dx)==1 and abs(cy-dy)==2):
    print("VALIDO")
else:
    print("INVALIDO")