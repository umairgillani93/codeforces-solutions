s = str(input())
arr = []
b = 0
for i in range(len(s)):
    arr.append((b, -i, s[i]))
    if s[i] == '(':
        b += 1
    else:
        b -= 1

arr.sort()
print("".join([x[2] for x in arr]))
