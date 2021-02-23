n = int(input())
lst = [1, 1] + [0]*n
result = 0
for i in range(2, n):
    lst[i] = lst[i-2] + lst[i-1]
print(lst[n-1])