import sys

input = sys.stdin.readline


n = 2000000
lst = [True for i in range(n+1)] 

for i in range(2, int(n**0.5) + 1): 
    if lst[i]: 
        j = 2
        while i * j <= n:
            lst[i * j] = False
            j += 1

lst = [i for i in range(3, n+1) if lst[i]]

def prime(t):
    is_prime = True
    for num in lst:
        if t % num == 0:
            is_prime = False
            break    
    return is_prime

t = int(input())

for i in range(t):
    a, b = map(int, input().split())
    tot = a + b
    sol = False
    
    if tot % 2 == 1:
        tot -= 2        
        
        if tot > n:
            sol = prime(tot)
        else:
            if tot in lst:
                sol = True
    
    else:
        if tot > 2:
            sol = True

    if sol:
        print('YES')
    else:
        print('NO')