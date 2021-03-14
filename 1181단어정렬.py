n = int(input())

word= set()
for i in range(n):
    word.add(input())

word = list(word)
word.sort(key = lambda word: (len(word),word))

for i in range(len(word)):
    print(word[i])