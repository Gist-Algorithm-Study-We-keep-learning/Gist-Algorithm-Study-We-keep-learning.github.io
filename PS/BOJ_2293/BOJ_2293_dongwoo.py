n,k=map(int,input().split())

coin=[]
dp=[1]+[0]*k
for _ in range(n):
    c=int(input())
    coin.append(c)

for i in range(n):
    for j in range(coin[i],k+1):
        dp[j]+=dp[j-coin[i]]
print(dp[k])
