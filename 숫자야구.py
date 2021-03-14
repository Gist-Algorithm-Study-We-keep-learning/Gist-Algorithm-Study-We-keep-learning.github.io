import sys
from itertools import permutations

input = sys.stdin.readline

T = int(input())
lst = [[0] * 3 for i in range(T)]
arr = list(permutations([1,2,3,4,5,6,7,8,9], 3))
sol = []

for i in range(T):
    num, s, b = list(map(int, input().split()))
    num = list(str(num))    


