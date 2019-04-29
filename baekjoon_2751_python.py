import sys
N=int(sys.stdin.readline().rstrip())
num=[]
for i in range(N):
    num.append((int(sys.stdin.readline().rstrip())))
num = sorted(num)
for i in num:
    print(i)
