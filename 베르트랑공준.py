n = 1
while True:
    n = int(input())
    if n==0:
        break
    
    lst = [0,0] +[1]*(2*n-1)

    for i in range(2, len(lst)):
        if i**2 <= 2*n:
            for j in range(i*2, 2*n+1, i):
                lst[j] = 0
    print(sum(lst[n+1:2*n+1]))
        
    