n = int(input())
A = list(map(int, input().split()))
t = 0
lst_a = [[0, 1, 2], [0, 1, 3], [0, 2, 4], [0, 3, 4],\
     [1, 2, 5], [1, 3, 5], [2, 4, 5], [3, 4, 5]]

t_lst = [0] * 8

if n == 1:
    A.remove(max(A))
    
else:
    k = A.index(min(A))
    t += min(A) * (8 + (n-2) * 12 + (n-2) * (n-2) * 5)

    for j in range(8):
        if k in lst_a[j]:
            lst_a[j].remove(k)
            t_lst[j] = min(A[lst_a[j][0]], A[lst_a[j][1]]) * (8 + (n-2) * 8) \
                + max(A[lst_a[j][0]], A[lst_a[j][1]]) * 4
    t_lst = list(set(t_lst))
    t_lst.remove(0)

    t += min(t_lst)
    print(t)