import sys
import math
input = sys.stdin.readline

def distance(x1, y1, x2, y2):
    return math.sqrt((x1 - x2)**2 + (y1 - y2)**2)

T = int(input())
for i in range(T):
    
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    if r1 > r2:
        r1, r2 = r2, r1
    d = distance(x1, y1, x2, y2)
    
    if d == 0 and r1 == r2:
        print(-1)
    elif d == 0 and r1 != r2:
        print(0)
    elif d > r1 + r2:
        print(0)
    elif d == r1 + r2:
        print(1)
    elif d < r1 + r2 and d < r2 - r1:
        print(0)
    elif d < r1 + r2 and d == r2 - r1:
        print(1)
    else:
        print(2)

