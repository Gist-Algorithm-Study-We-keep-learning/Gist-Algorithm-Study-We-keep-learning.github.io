import sys
input=sys.stdin.readline

N=int(input())
N_list=sorted((map(int,input().split())))
M=int(input())
M_list=list(map(int,input().split()))

def binary(s,e,N_list,i):
    if s>e:
        return 0

    mid=(s+e)//2

    if N_list[mid]==i:
        return N_list[s:e+1].count(i)
    elif N_list[mid]>i:
        return binary(s,mid-1,N_list,i)
    else:
        return binary(mid+1,e,N_list,i)

dic={}
for i in N_list:
    s=0
    e=len(N_list)-1
    if i not in dic:
        dic[i]=binary(s,e,N_list,i)

print(' '.join(str(dic[x]) if x in dic else '0' for x in M_list))
