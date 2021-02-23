import sys
input = sys.stdin.readline

A = [0] + list(str(input().strip()))
B = [0] + list(str(input().strip()))

len_A = len(A) 
len_B = len(B) 

dp = [[0]*len_B for i in range(len_A)]


for i in range(1, len_A):
    for j in range(1, len_B):
        if A[i] == B[j]:
            dp[i][j] = dp[i-1][j-1] + 1
        else:
            dp[i][j] = max(dp[i][j-1], dp[i-1][j])

lst = []
i = len_A - 1
j = len_B - 1

while i > 0 and j > 0:
    if dp[i][j] == dp[i-1][j]:
        i-=1
    elif dp[i][j] == dp[i][j-1]:
        j-=1
    elif dp[i][j] > dp[i-1][j-1]:
        lst.append(A[i])
        i-=1
        j-=1

print(max(dp[-1]))

if lst == []:
    print(0)
else:
    for i in range(len(lst)-1,-1,-1):
        print(lst[i],end='')
    