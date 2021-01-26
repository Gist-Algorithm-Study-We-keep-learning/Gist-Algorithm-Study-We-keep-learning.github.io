def rgb(arr):
    sol = arr[0]
    for i in range(1, len(arr)):
        print(sol)
        sol = [min(sol[1]+arr[i][0], sol[2]+arr[i][0]),\
        min(sol[0]+arr[i][1], sol[2]+arr[i][1]),\
         min(sol[0]+arr[i][2], sol[1]+arr[i][2])]
        print(sol)
    return sol
N = int(input())
arr = [0]*N 
for i in range(N):
    arr[i] = list(map(int, input().split()))
    print(arr)
print(min(rgb(arr)))