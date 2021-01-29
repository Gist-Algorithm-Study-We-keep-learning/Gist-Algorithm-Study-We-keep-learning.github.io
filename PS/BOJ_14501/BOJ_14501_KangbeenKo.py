n=int(input())
d=[0]*(n+1)
for i in range(n) :
    if(d[i+1]<d[i]) :
        d[i+1]=d[i]
    t, p=map(int, input().split())
    if(i+t<=n) :
        if(d[i+t]<d[i]+p) :
            d[i+t]=d[i]+p

print(max(d))