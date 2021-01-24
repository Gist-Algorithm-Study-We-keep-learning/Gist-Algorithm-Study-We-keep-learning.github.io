def average (a):
    tot = 0
    for i in range(1,a[0]+1):
        tot += a[i]
    return tot/(a[0])

n = int(input())
cnt = 0
avg = 0
for i in range(n):
    num = list(map(int, input().split()))
    avg = average(num)
    cnt = 0
    for i in range(1,num[0]+1):
        if num[i] > avg :
            cnt += 1
    portion = (cnt/num[0]) *100
    print("%0.3f%%"%round(portion,3))
    
   


