import sys
N=int(sys.stdin.readline().rstrip())
num=[0]*10001
for i in range(N):
    num[(int(sys.stdin.readline().rstrip()))] +=1

for i in range(1,10001):
    if num[i] is 0:
        continue
    print('%d\n'%i *num[i],end='')
