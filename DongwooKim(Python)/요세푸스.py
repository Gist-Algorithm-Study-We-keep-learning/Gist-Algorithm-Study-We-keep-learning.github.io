N,K=map(int,input().split())
circular_list=[]
answer=[]

for i in range(N):
    circular_list.append(i+1)

popNum=0

while len(circular_list)>0:
    popNum=(popNum+(K-1))%len(circular_list)
    popElement=circular_list.pop(popNum)
    answer.append(str(popElement))

print("<%s>"%(", ".join(answer)))
