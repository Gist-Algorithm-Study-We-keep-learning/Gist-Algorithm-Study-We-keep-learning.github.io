N=int(input())
time=[]
pay=[]
dp=[]

for i in range(N):
    t,p=map(int,input().split())
    time.append(t)
    pay.append(p)

dp=[0]*25
for i in range(N):
    if dp[i]>dp[i+1]:
        dp[i+1]=dp[i]
    if dp[i+time[i]]<dp[i]+pay[i]:
        dp[i+time[i]]=dp[i]+pay[i]

print(dp[N])
