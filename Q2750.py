# 1 e 2
valores = [i for i in range(16)]

# 3
for _ in range(39):
    print(end="-")
print()

# 4
print("|  decimal  |  octal  |  Hexadecimal  |")

# 5
for _ in range(39):
    print(end="-")
print()

# 6 e 7
for v in valores:
    print(f"|{v:7}    |{oct(v)[2:]:>5}    |{hex(v).upper()[2:]:>8}       |")

# 8
for _ in range(39):
    print(end="-")
print()