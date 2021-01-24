x, y = map(int, input().split())
lst = list(range(1, x+1))
sol = []
i = y-1
while len(lst)>0 :
    if i > (len(lst)-1):
        i -= len(lst)
    else:
        sol.append(lst.pop(i))
        i += y - 1

print("<"+", ".join(str(j) for j in sol)+">")
