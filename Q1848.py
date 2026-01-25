converter = {
    "*": 1,
    "-": 0
}

num1 = 0
while True:
    resp = input()
    if resp[0] == "c":
        break
    num1 += 2**2 * converter[resp[0]]
    num1 += 2**1 * converter[resp[1]]
    num1 += 2**0 * converter[resp[2]]

num2 = 0
while True:
    resp = input()
    if resp[0] == "c":
        break
    num2 += 2**2 * converter[resp[0]]
    num2 += 2**1 * converter[resp[1]]
    num2 += 2**0 * converter[resp[2]]

num3 = 0
while True:
    resp = input()
    if resp[0] == "c":
        break
    num3 += 2**2 * converter[resp[0]]
    num3 += 2**1 * converter[resp[1]]
    num3 += 2**0 * converter[resp[2]]

print(num1)
print(num2)
print(num3)
