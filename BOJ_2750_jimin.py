n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()))
for i in range(n):
    min_index = i
    for j in range(i+1, n):
        if lst[min_index] > lst [j]:
            min_index = j
    lst[min_index], lst[i] = lst[i], lst[min_index]
for i in range(n):
    print(lst[i])