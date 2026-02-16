R = ""
for _ in range(int(input())):
    b, e = map(int, input().split())
    R += f"{len(str(pow(b, e)))}\n"
print(R.strip())