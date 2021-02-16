def binary(s,e,n_list,i):
    
    while s<=e:
        mid=(s+e)//2
        if n_list[mid]==i:
            return 1
        elif n_list[mid]>i:
            e=mid-1
        else:
            s=mid+1
    return 0

            
n=int(input())
n_list=list(map(int,input().split()))
n_list.sort()

M=int(input())
m_list=list(map(int,input().split()))

for i in m_list:
    print(binary(0,n-1,n_list,i))

    