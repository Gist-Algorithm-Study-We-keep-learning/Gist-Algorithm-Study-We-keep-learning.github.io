K = int(input())

def AB(n):
    lst = [0,1]
    for i in range(2, n+1):
        lst.append(lst[i-1] + lst[i-2])
    return lst[n-1], lst[n]

if K == 1:
    print("0 1")
else:
    print("%d %d"%AB(K))
