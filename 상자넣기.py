n = int(input())
arr = list(map(int, input().split()))
dp = [0] * n

for i in range(n):
    max_num = 0
    for j in range(i):
        
        if arr[i] > arr[j]:
            max_num = max(max_num, dp[j])
    
    dp[i] = max_num + 1
print(dp)
print(max(dp))
