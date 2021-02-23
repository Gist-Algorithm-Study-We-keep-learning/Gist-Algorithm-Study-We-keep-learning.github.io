def fibonacci(n):
    lst = [0,1]
    for i in range(2, n+1):
        lst.append(lst[i-1] + lst[i-2])
    return lst[n-1], lst[n]

T = int(input())

for i in range(T):
    n = int(input())
    if n == 0:
        print("1 0")
    elif n == 1:
        print("0 1")
    else:
        print("%d %d"%fibonacci(n))

