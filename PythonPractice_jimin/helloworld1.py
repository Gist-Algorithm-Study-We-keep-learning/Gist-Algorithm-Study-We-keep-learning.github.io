c = int(input())

for i in range(c):
    A = list(map(int, input().split()))
    average = float(sum(A[1:]))/float(A[0])
    count = 0
    for j in A[1:]:
        if j > average:
            count +=1
    print("%0.3f%%" %round(float(100*count)/float(A[0]),3))

    