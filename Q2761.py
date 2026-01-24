import struct

def f32(x):
    return struct.unpack("f", struct.pack("f", x))[0]

a, b, c, d = input().split(maxsplit=3)
a = int(a)
b = float(b)

print(f"{a}{f32(b):.6f}{c}{d}")
print(f"{a:}\t{f32(b):.6f}\t{c:}\t{d}")
print(f"{a:>10}{f32(b):>10.6f}{c:>10}{d:>10}")