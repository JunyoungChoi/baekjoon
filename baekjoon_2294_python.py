import sys
n,k = map(int,sys.stdin.readline().rstrip().split())
num=[]
for i in range(n):
    num.append(int(sys.stdin.readline().rstrip()))
num_list = [10001 for i in range(10001)]
num_list[0]=0
for i in num:
    for j in range(i,k+1):
        if num_list[j] >num_list[j-i]+1:
            num_list[j] = num_list[j-i] +1
if num_list[k] == 10001:
    print(-1)
else:
    print(num_list[k])
