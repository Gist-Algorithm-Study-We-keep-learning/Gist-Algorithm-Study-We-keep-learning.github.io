import sys
input = sys.stdin.readline

A = [0] + list(str(input().strip()))
B = [0] + list(str(input().strip()))

len_A = len(A) 
len_B = len(B) 

dp = [[0]*len_B for i in range(len_A)]

print(dp)
print(A)
print(B)

for i in range(1, len_A):
    for j in range(1, len_B):
        if A[i] == B[j]:
            dp[i][j] = dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(dp[i][j-1], dp[i-1][j])


print(dp)
print(max(dp))