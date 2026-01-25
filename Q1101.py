valores = []

while True:
    nums = tuple(map(int, input().split()))
    if nums[0] <= 0 or nums[1] <= 0:
        break
    valores.append(nums)

for dupla in valores:
    ttl = 0
    for n in range(min(dupla[0], dupla[1]), max(dupla[0], dupla[1])+1):
        print(n, end=" ")
        ttl += n
    print(f"Sum={ttl}")
