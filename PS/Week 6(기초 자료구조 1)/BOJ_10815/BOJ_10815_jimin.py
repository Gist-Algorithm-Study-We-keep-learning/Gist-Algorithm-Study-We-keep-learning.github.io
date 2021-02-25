import sys
input = sys.stdin.readline

input()
A = set(map(int, input().split()))
input()
B = list(map(int, input().split()))

for num in B:
	if num in A:
		print(1, end = ' ')
	else:
		print(0, end = ' ')