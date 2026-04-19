n, q = map(int, input().split())

V = list(map(int, input().split()))

for _ in range(q):
    c = list(map(int, input().split()))[1::]
    if len(c) != 2: continue
    