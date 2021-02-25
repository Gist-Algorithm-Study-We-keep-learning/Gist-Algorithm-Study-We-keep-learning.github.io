import sys
input = sys.stdin.readline

A = list(input())
A.pop()
n = int(input())
B = []

def edit(m, w):
    if m == 'L':
        if A == []:
            return
        else:
            B.append(A.pop())
            return
    
    elif m == 'D':
        if B == []:
            return
        else:
            A.append(B.pop())
            return
    
    elif m == 'B':
        if A == []:
            return
        else:
            A.pop()
            return
    
    else:
        A.append(w)
        return
    

for i in range(n):
    order = list(input().split())
    m = order[0]
    if len(order) == 1:
        edit(m, 0)
    else:
        w = order[1]
        edit(m, w)

B = reversed(B)

A += B

for s in A:
    print(s, end = '')

