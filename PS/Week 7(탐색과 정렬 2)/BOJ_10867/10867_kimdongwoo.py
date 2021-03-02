import sys

N=int(sys.stdin.readline())

lst=list(map(int,sys.stdin.readline().split()))

lst=list(set(lst))
lst.sort()

for i in lst:
    print(i,'',end='')
