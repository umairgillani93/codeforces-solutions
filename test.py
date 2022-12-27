n = 10
combs = []

for i in range(n):
    for j in range(n):
        if (i + j == n):
            combs.append((i, j))
        else:
            continue

print(combs)
