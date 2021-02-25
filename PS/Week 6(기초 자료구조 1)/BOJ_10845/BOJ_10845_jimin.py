import sys
input = sys.stdin.readline

def push(arr, n):
    return arr.append(n)
def pop(arr):
    if arr == []:
        print(-1)
    else:
        print(arr.pop(0))
def size(arr):
    print(len(arr))
def empty(arr):
    if arr == []:
        print(1)
    else:
        print(0)
def front(arr):
    if arr == []:
        print(-1)
    else:
        print(arr[0])
def back(arr):
    if arr == []:
        print(-1)
    else:
        print(arr[-1])

n = int(input())

arr = []

for i in range (n):
    value = input().split()
    
    if value[0] == 'push':
        push(arr, value[1])
    elif value[0] == 'pop':
        pop(arr)
    elif value[0] == 'size':
        size(arr)
    elif value[0] == 'empty':
        empty(arr)
    elif value[0] == 'front':
        front(arr)
    else:
        back(arr)  