import os 
import itertools

n = int(input())

combs = list(itertools.combinations(range(n), 2))
valids = []

for x in combs:
    if x[0] + x[1] == n:
        valids.append((x[0], x[1]))

    else:
        continue

def lcm(x, y):
    for i in range(1, 11):
        if x % i == 0 and y % i == 0:
            return i
        else:
            continue

for j in valids:
    if lcm(j[0], j[1]) <= n:
        print(j)
    else:
        continue

print('new test line added')
            
