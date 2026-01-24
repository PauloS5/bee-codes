caso = float(input())
res = f"{caso:.4e}";
if res[0] != '-':
    print(end="+")
print(res.upper())