def prime_num(n):
    prime = True
    k = int(n**0.5) + 1   
    for i in range(2, k):
        if n % i == 0:
            prime = False
            break
    return prime


T = int(input())

for j in range(T):
    n = int(input())
    t1 = n//2
    t2 = n//2
    while True:
        if prime_num(t1) == True and prime_num(t2) == True:
            break
        t1 -= 1
        t2 += 1
    print("{0} {1}".format(t1, t2))