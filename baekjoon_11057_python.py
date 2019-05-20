import sys
n=int(sys.stdin.readline().rstrip())
d=[ [0 for i in range(10)] for j in range(n+1) ]
for i in range(0, 10):
    d[1][i]=1

for i in range(2,n+1):
    for j in range(0,10):
        if j==0:
            d[i][0]=1
        elif j==1:
            d[i][1]=i
        else:
            sum=0
            for k in range(0,j+1):
                sum+=d[i-1][k]
            d[i][j]+=sum
sum=0
for i in range(0,10):
    sum+=d[n][i]
print(sum%10007)
