t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    dp = [[0]*(n+1) for _ in range(n+1)]
    for i in range(1, n+1):
        for j in range(i, n+1):
            if (i % 2 == 0 and j % 2 != 0) or (i % 2 != 0 and j % 2 == 0):
                for k in range(max(0, j-1), -1, -1):
                    if (k % 2 == i % 2): break
                dp[i][j] = max(dp[i-1][k] + a[j], 0)
            else:
                dp[i][j] = 0
    print(max(sum(a[k:j+1]) for k in range(n) if dp[n][k] != 0))
