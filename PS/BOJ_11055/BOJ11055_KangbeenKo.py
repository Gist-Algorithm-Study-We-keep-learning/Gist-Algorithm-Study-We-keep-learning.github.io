n = int(input())
nums = list(map(int, input().split()))
answer = [0] * n

for i in range(n):
    temp = 0

    for j in range(i):
        if nums[j]<nums[i]:
            temp = max(temp, answer[j])
    
    answer[i] = temp + nums[i]

print(max(answer))