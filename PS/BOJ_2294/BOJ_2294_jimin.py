n, k = map(int, input().split())
coin = []

for i in range(n):
    coin.append(int(input()))

dp = [0]+[10001]*(k)

for i in range(n):
    for j in range(coin[i], k+1):
        print(dp)
        dp[j] = min(dp[j], dp[j-coin[i]]+1)
print(dp)
if dp[k] == 10001:
    print(-1)
else:
    print(dp[k])