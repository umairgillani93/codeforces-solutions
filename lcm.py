import os
import sys
import numpy as np
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
    lcm = 0
    if x > y:
        g = x
    else:
        g = y

    while(True):
        if (g % x == 0) and (g % y == 0):
            lcm = g
            break
        else:
            g += 1
    return lcm

def main(): 
   n = int(input())
   vector = []
   for _ in range(n):
       vector.append(int(input()))


   for i in range(len(vector)):
       pairs = make_pairs(vector[i])
       opt = []
       for j in range(len(pairs)):
           x, y = pairs[j]
           val = lcm(x, y)

           if val < vector[i]:
               print(x, y)
           else:
               continue


print(main())
