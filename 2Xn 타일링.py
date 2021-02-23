n =int(input())

def tile(n):
    dp = [1, 2] + [0]*(n-2)
    for i in range(2, n):
        dp[i] = dp[i-1]+dp[i-2]
    return dp[-1]
print(tile(n))