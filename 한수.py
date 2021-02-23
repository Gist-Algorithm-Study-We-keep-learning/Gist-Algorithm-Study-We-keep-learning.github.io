n = int(input())
lst = list(range(n+1))
for i in range(1, n+1):
    if i < 100:
        lst[i] = True
    else:
        k = list(map(int, str(i)))
        for j in range(2, len(k)):
            if k[j]-k[j-1] == k[1] - k[0]:
                lst[i] = True
            else:
                lst[i] = False

print(lst.count(True))
    