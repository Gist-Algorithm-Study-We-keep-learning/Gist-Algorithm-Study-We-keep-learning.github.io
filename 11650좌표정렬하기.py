import sys
input = sys.stdin.readline

n = int(input())
lst = [0] * n
for i in range(n):
    lst[i] = list(map(int, input().split()))
lst = sorted(lst)

for i in range(n):
    print(lst[i][0], lst[i][1])