def count(arr):
    cnt1 = 0
    cnt2 = 0
    for chr in arr:
        if chr == '(':
            cnt1 += 1
        else:
            cnt2 += 1
        if cnt2 > cnt1:
            break
    if cnt2 > cnt1:
        return True
n = int(input())
for i in range(n):
    arr = list(map(str, input()))
    sol = 'YES'
    if arr.count('(') != arr.count(')'):
        sol = 'NO'
    if count(arr) == True:
        sol = 'NO' 
    print(sol)