n, k = map(int, input().split())
coin = []
for i in range(n):
    coin.append(int(input()))
dp = [1]+[0]*(k)
     
for i in range(len(coin)):
    for j in range(coin[i], k+1):
            dp[j] += dp[j-coin[i]]
            print(dp)
            
print(dp[k])

