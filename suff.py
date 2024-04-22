s = str(input())
s += " "
L = []

for i in range(len(s)):
    L.append((s[i:], i))

L = sorted(L)

for i in range(len(L)):
    print(L[i][1], end = " ")

