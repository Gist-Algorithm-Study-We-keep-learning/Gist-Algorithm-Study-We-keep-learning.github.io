n,k=map(int,input().split())

coin=[]
dp=[0]+[10001]*k
for _ in range(n):
    c=int(input())
    coin.append(c)

for i in range(n):
    for j in range(coin[i],k+1):
        dp[j]=min(dp[j],dp[j-coin[i]]+1)

if dp[k]==10001:
    print(-1)
else:
    print(dp[k])
