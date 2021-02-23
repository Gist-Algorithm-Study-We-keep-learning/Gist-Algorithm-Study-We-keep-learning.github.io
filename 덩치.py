n = int(input())
lst = [[0]*2 + [1] for i in range(n)]

for i in range(n):
    lst[i][0], lst[i][1] = map(int, input().split())


for i in range(n):
    for j in range(i+1, n):
        if lst[i][0] < lst[j][0] and lst[i][1] < lst[j][1]:
            lst[i][2] += 1
        elif lst[i][0] > lst[j][0] and lst[i][1] > lst[j][1]:
            lst[j][2] += 1

for i in range(n):
    print(lst[i][2], end = " ")