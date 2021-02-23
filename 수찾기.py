import sys
input = sys.stdin.readline

n = int(input())
A = sorted(list(map(int, input().split())))
m = int(input())
B = list(map(int, input().split()))

def find(n, arr, start, end):
    if start> end:
        return False
    
    mid = (start + end)//2
    
    if n == arr[mid]:
        return True
    elif n < arr[mid]:
        return find(n, arr, start, mid-1)
    else:
        return find(n, arr, mid+1, end)



for b in B:
    if find(b, A, 0, len(A) - 1) == False:
        print(0, end =' ')
    else:
        print(1, end =' ')
