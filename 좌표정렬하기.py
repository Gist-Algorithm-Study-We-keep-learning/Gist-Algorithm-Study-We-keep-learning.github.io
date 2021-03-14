lst = list(range(10001))
selfnum = []
c_sol = []
k = 0

for i in range(10001):
    if i < 10:
        c_sol.append(2*lst[i]) 
    else:
        k = lst[i]
        selfnum = list(map(int, str(lst[i])))
        k += sum(selfnum)
        c_sol.append(k)

lst = sorted(list(set(lst) - set(c_sol)))

for i in range(len(lst)):
    print(lst[i]) 