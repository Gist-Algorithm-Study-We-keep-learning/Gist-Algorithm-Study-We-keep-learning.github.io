n = int(input())
for i in range(n):
    cnt = 0
    arr = list(map(str, input()))
    for chr in arr:
        if chr == '(':
            cnt += 1
        else:
            cnt -= 1
        if cnt < 0: 
            break
    if cnt == 0:
        print('YES')
    else:
        print('NO')
