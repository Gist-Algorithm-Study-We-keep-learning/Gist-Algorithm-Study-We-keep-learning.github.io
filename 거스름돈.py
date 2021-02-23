#2와 5로만 준다.
def change(n):
    if n%5 == 0:
        return n//5
    elif n%5%2 == 0:
        return n//5 + n%5//2
    else:
        return n//5-1 + (n%5+5)//2

n = int(input())
if n == 1 or n == 3:
    print(-1)
else:
    print(change(n))