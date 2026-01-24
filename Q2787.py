l = int(input())
c = int(input())

cor = l % 2 == 1
cor = cor if c % 2 == 1 else not(cor)
print(int(cor))