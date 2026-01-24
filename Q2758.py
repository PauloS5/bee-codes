import struct

def f32(x):
    return struct.unpack('f', struct.pack('f', x))[0]

a, b = map(float, input().split())
c, d = map(float, input().split())

print(f"A = {f32(a):.6f}, B = {f32(b):.6f}")
print(f"C = {c:.6f}, D = {d:.6f}")

print(f"A = {f32(a):.1f}, B = {f32(b):.1f}")
print(f"C = {c:.1f}, D = {d:.1f}")

print(f"A = {f32(a):.2f}, B = {f32(b):.2f}")
print(f"C = {c:.2f}, D = {d:.2f}")

print(f"A = {f32(a):.3f}, B = {f32(b):.3f}")
print(f"C = {c:.3f}, D = {d:.3f}")

print(f"A = {f32(a):.3E}, B = {f32(b):.3E}")
print(f"C = {c:.3E}, D = {d:.3E}")

print(f"A = {f32(a):.0f}, B = {f32(b):.0f}")
print(f"C = {c:.0f}, D = {d:.0f}")