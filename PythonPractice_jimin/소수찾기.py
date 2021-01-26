n = int(input())
N = list(map(int, input().split()))
cnt = 0
for num in N:
    if num <= 1:
        cnt += 1
    for i in range(2, num):
        if num % i == 0:
            cnt+=1
            break 
print(n - cnt)