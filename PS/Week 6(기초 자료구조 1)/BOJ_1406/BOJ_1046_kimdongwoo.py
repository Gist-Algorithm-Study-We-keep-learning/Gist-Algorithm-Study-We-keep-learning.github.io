import sys

word1=list(sys.stdin.readline().strip())
word2=[]
N=len(word1)

M=int(sys.stdin.readline())

for _ in range(M):
    cmd=sys.stdin.readline().strip()

    if cmd[0]=="L" and word1!=[]:
        word2.append(word1.pop())
            
    elif cmd[0]=="D" and word2!=[]:
        word1.append(word2.pop())

    elif cmd[0]=="B" and word1!=0:
        word1.pop()

    elif cmd[0]=="P":
        word1.append(cmd[2])



print(''.join(word1+list(reversed(word2))))
        
    
