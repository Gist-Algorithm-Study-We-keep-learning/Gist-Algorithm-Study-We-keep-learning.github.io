def hanoi_num(start, mid, end, n):
    if n == 1:
        return 1
    else:
        return hanoi_num(start, end, mid, n-1) \
            + hanoi_num(mid, start, end, n-1) + 1

def hanoi_lst(start, mid, end, n):
    if n == 1:
        return [start, end]
    else:
        return hanoi_lst(start, end, mid, n-1) + [start, end] +\
            hanoi_lst(mid, start, end, n-1)\
            

T = int(input())

print(hanoi_num(1, 2, 3, T))

lst = hanoi_lst(1, 2, 3, T)
for i in range(len(lst)):
    print(lst[i], end = ' ')
    if (i+1) % 2 == 0:
        print()