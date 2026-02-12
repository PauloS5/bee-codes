k = input().strip()

R = ""
for _ in range(int(input())):
    C = input().split()

    r = ""
    i = 0
    for c in C:
        if c[0] in ('a', 'e', 'i', 'o', 'u'):
            r += c + " "
            continue
        for ch in c:
            r += chr(((ord(k[i % len(k)])-97 + ord(ch)-97) % 26) + 97)
            i += 1
        r += " "
    R += r.strip() + "\n"
print(R.strip())