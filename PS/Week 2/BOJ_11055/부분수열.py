N=int(input())

input_list=list(map(int,input().split()))

total_list=[x for x in input_list]

for i in range(N):
    for j in range(i):
        if input_list[i]>input_list[j]:
            total_list[i]=max(total_list[i],total_list[j]+input_list[i])
           

print(max(total_list))
