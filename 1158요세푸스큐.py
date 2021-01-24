import sys
x, y = map(int, sys.stdin.readline().split())
lst = list(range(1, x+1))
sol = []
i = 0
while len(lst) > 0:
    i += 1
    if i%y == 0:
        sol.append(lst.pop(0))
    else:
        lst.append(lst.pop(0))
print("<"+", ".join(str(j) for j in sol)+">")