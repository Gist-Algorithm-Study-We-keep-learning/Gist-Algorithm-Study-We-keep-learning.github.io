N = int(input())
days = [0]*N
dp = [0]*(N+1)
for i in range(N):
    days[i] = list(map(int, input().split()))

for i in range(N):
  dp[i+1] = max(dp[i],dp[i+1])
  if i+days[i][0] <= N:
    dp[i+days[i][0]] = max(dp[i]+days[i][1],dp[i+days[i][0]])

print(dp[N])



    
    