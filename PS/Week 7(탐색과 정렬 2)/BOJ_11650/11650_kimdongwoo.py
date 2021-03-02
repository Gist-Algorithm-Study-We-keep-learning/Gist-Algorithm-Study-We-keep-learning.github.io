import sys

N=int(sys.stdin.readline())
lst=[]

for _ in range(N):
    x,y=map(int,sys.stdin.readline().split())
    lst.append((x,y))

lst.sort(key=lambda x:(x[0],x[1]))

for i,j in lst:
    print(i,j)
    
