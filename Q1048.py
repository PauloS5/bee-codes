salario = float(input())

if salario >= 0.0 and salario <= 400.0:
    reaj = 0.15
elif salario <= 800.0:
    reaj = 0.12
elif salario <= 1200.0:
    reaj = 0.1
elif salario <= 2000.0:
    reaj = 0.07
else:
    reaj = 0.04

print(f"Novo salario: {(salario*(1.0+reaj)):.2f}")
print(f"Reajuste ganho: {(salario*reaj):.2f}")
print(f"Em percentual: {(100*reaj):.0f} %")
