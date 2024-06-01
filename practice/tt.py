import os
import sys

test = int(input())
for _ in range(test):
    n, k, s = [int(x) for x in input().split()]

    ns = [x for x in range(1, n+1)]

    ns = sorted(ns, reverse = True)

    t = 0
    N = 0

    check = True
    for val in ns:
        t += val
        N += 1
        if t > s:
            t -= val
            N -= 1
        elif (t == s and N == k):
            print('Yes')
            check = False
            sys.exit()
    if (check == True):
        print('NO')




