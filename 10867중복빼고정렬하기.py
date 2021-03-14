n = int(input())
lst = sorted(list(set((map(int, input().split())))))
for i in range(len(lst)): print(lst[i], end = ' ')