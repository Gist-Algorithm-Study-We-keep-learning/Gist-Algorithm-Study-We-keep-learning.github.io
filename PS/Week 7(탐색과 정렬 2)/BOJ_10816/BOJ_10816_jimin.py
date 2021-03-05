import sys
input = sys.stdin.readline

from collections import Counter

n = int(input())
man = sorted(list(map(int, input().split())))
m = int(input())
deck = list(map(int, input().split()))
man = Counter(man)
result = []

for num in deck:
    result.append(man[num])
for num in result:
    print(num, end = ' ')    
