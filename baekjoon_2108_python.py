import sys
import collections
num=[]
for i in range(int(sys.stdin.readline().rstrip())):
    num.append(int(sys.stdin.readline().rstrip()))
num=sorted(num)
most=collections.Counter(num)
most = sorted(most.items(),key=lambda x:(-x[1],x[0]))
if len(num) == 1:
    print(num[0])
    print(num[0])
    print(num[0])
    print(0)
    sys.exit()


print(round(sum(num)/len(num)))
print(num[len(num)//2])
if most[0][1] == most[1][1]:
    print(most[1][0])
else:
    print(most[0][0])
print(num[-1]-num[0])
