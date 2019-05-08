import sys
num=[]
cnt = 0
N,K=map(int,sys.stdin.readline().rstrip().split())
for i in range(N):
    num.append(int(sys.stdin.readline().rstrip()))
num = list(filter(lambda x:x<=K,num))
num.reverse()
for i in num:
    if i > K:
        continue
    cnt+=K//i

    K-=K//i*i
print(cnt)
