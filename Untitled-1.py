test_case = int(input())
for _ in range(test_case):
    k = int(input())+1
    n = int(input())
    s = 0
    arr= [[0]*n for i in range(k)]

    for i in range(k):
        for j in range(1,n+1):
            if i == 0:
                arr[i][j-1] = j
            else:
                for z in range(j):
                    arr[i][j-1] += arr[i-1][z]

    print(arr[k-1][n-1])
