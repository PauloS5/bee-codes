def isPowerOfTwo(n: int) -> bool:
    if n < 1:
        return False
    if bin(n).count('1') != 1:
        return False
    return True

n = int(input())
isPOT = isPowerOfTwo(n)
print(str(isPOT).lower())