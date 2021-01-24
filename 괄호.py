lines=int(input())

for i in range(lines):
    bracket=input()
    bracket_list=list(bracket)
    sum=0
    for j in bracket_list:
        if j=='(':
            sum+=1
        elif j==')':
            sum-=1
        if sum<0:
            print('NO')
            break
    if sum>0:
        print('NO')
    elif sum==0:
        print('YES')
