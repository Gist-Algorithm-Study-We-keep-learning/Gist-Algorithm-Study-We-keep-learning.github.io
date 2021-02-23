n = int(input())

word= set()
for i in range(n):
    word.add(input())

word = list(word)
word.sort(key = len)

print("\n".join(word))