def score(a):
    n = 0 
    s= 0
    for i in range(len(a)):
        n += 1
        if a[i] == 'O':
            s += n
        else:
            n = 0
    return s
T = int(input())
for i in range(T):
    arr = list(input())
    print(arr)
    print(score(arr))
