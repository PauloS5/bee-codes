centenas = {
    "1": "C",
    "2": "CC",
    "3": "CCC",
    "4": "CD",
    "5": "D",
    "6": "DC",
    "7": "DCC",
    "8": "DCCC",
    "9": "CM",
    "0": ""
}

dezenas = {
    "1": "X",
    "2": "XX",
    "3": "XXX",
    "4": "XL",
    "5": "L",
    "6": "LX",
    "7": "LXX",
    "8": "LXXX",
    "9": "XC",
    "0": ""
}

unidades = {
    "1": "I",
    "2": "II",
    "3": "III",
    "4": "IV",
    "5": "V",
    "6": "VI",
    "7": "VII",
    "8": "VIII",
    "9": "IX",
    "0": ""
}

num = input()

len_num = len(num)
if len_num < 3:
    num = "0" + num
if len_num < 2:
    num = "0" + num

print(f"{centenas[num[0]]}{dezenas[num[1]]}{unidades[num[2]]}")