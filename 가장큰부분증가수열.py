import sys
input = sys.stdin.readline

T = int(input())
arr = list(map(int,input().split()))
dp = []
dp = arr

for i in range(T):
    max_num = 0
    for j in range(i):
        
        if arr[i] > arr[j]:
            max_num = max(max_num, arr[j])
    
    dp[i] = max_num + arr[i]

print(max(dp))
