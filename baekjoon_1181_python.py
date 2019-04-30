import sys
answer=[]
answer_list=[]
for i in range(int(sys.stdin.readline().rstrip())):
    answer.append(sys.stdin.readline().rstrip())
answer= list(set(answer))
for i in answer:
    answer_list.append([len(i),i])
answer_list.sort()
for a,b in answer_list:
    print(b)
