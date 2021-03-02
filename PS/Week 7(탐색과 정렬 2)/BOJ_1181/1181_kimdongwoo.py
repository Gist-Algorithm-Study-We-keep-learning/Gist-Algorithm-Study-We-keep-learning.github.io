import sys

N=int(sys.stdin.readline())
lst=[]
new_lst=[]

for _ in range(N):
    word=sys.stdin.readline()
    lst.append(word)

lst=list(set(lst))

for j in lst:
    new_lst.append((len(j),j))

new_lst.sort()

for i,j in new_lst:
    print(j[0:i-1])
