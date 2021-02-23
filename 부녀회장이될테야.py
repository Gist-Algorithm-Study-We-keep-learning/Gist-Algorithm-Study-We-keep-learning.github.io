t =int(input())

for i in range(t):
    n = int(input())
    m = int(input())
    lst = list(range(m+1))
    
    for k in range(n):
        for j in range(1, m+1):
            lst[j] = lst[j] + lst[j-1]
    print(lst[m])