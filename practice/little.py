t = int(input())

for _ in range(t):
    n, m = [x for x in input().split()]
    if n >= m:
        print('YES')
    else:
        print('NO')

