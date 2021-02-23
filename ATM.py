import sys
input = sys.stdin.readline
n = int(input())
lst = sorted(list(map(int, input().split())))
sum_atm = 0

for i in range(n):
    sum_atm += lst.pop(0)*(n-i)

print(sum_atm)