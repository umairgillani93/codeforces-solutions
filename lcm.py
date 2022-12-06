import os
import itertools

def make_pairs(n):
    vc = []
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            if i + j == n:
                vc.append((i, j))
            else:
                continue
    return vc

def lcm(x, y):
    smaller = 0
    if x < y:
        smaller = x
    elif x > y:
        smaller = y
    else:
        smaller = x

    i = 1
    while (i <= smaller):
        if x % i == 0 and y % i == 0:
            return i
        else:
            i += 1
 
if __name__ == '__main__':
    n = int(input())
    vector = []
    for _ in range(n):
        vector.append(int(input()))

    for i in range(len(vector)):
        pairs = make_pairs(vector[i])
        for j in range(len(pairs)):
            x, y = pairs[j]
            val = lcm(x, y)
            print(f'val: {val}')
            if x < val and y < val:
                print(x, y)
            else:
                continue

