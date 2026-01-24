R = []
a, b = input().split()
while a != "0":
    b = b.replace(a, "")
    if b == "":
        b = 0
    R.append(int(b))
    a, b = input().split()

for r in R:
    print(r)