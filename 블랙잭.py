import sys
input = sys.stdin.readline

m, n = map(int, input().split())
lst = list(map(int, input().split()))
card = 10000


for i in range(m-2):    
    for j in range(i+1, m-1):
        for k in range(j+1, m):
            if n-lst[i]-lst[j]-lst[k] ==0:
                card =lst[i]+lst[j]+lst[k]
                break
            elif 0 < (n - lst[i] - lst[j] - lst[k]) < abs(n - card):
                card = lst[i]+ lst[j]+ lst[k]

print(card)