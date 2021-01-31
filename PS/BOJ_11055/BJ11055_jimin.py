a = int(input())
arr = list(map(int, input().split()))
dp = arr

for i in range(a):    
    for j in range(i):
        if arr[j] < arr[i]:
            dp[i] = max(dp[i], arr[i] +dp[j])

print(max(dp))

