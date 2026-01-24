casos = [int(input()) for _ in range(10)]

for i in range(len(casos)):
    if casos[i] <= 0:
        print(f"X[{i}] = 1")
    else:
        print(f"X[{i}] = {casos[i]}")