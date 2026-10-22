valores = []
usuario = input().split()
for i in usuario:
    x = int(i)
    valores.append(x)

print(*sorted(valores), sep='\n')
print()
print(*valores, sep='\n')
