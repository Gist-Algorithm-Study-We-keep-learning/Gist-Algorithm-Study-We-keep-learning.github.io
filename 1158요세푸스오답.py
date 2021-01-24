x, y = map(int, input().split())
lst = list(range(1, x+1))
sol = []
i = y-1
while len(lst)>0 :
    if i > (len(lst)-1):
        i -= len(lst)
        lst = list(set(lst).difference(sol))
        print(lst, sol)
    else:
        sol.append(lst[i])
        i += y

print("<"+", ".join(str(j) for j in sol)+">")