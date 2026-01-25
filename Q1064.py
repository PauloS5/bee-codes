"""
7
-5
6
-3.4
4.6
12
"""

nums = list(map(float, [input() for _ in range(6)]))


pos = [x for x in nums if x >= 0]

print(f"{len(pos)} valores positivos")
print(f"{(sum(pos) / len(pos)):.1f}")