import sys
input=sys.stdin.readline

def binary(s,e,N_list,i):
    while s<=e:
        mid=(s+e)//2

        if N_list[mid]==i:
            return 1
        elif N_list[mid]>i:
            e=mid-1
        else:
            s=mid+1
    return 0



N=int(input())
N_list=list(map(int,input().split()))
N_list.sort()
    
M=int(input())
M_list=list(map(int,input().split()))

for i in M_list:
    print(binary(0,N-1,N_list,i),end=' ')
            
