def prime_num(n):
    prime = True
    if n == 1: 
        prime = False   
    else:
        for i in range(2, int(n**0.5)+1):
            if n % i == 0:
                prime = False
                break
    return prime
        

m, n = map(int, input().split())
lst = list(range(m, n+1))
for num in lst:
    if prime_num(num) == True:
        print(num)