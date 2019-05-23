import sys
a=[]
N=int(sys.stdin.readline().rstrip())
for i in range(N):
    a.append([0,0,0])
for i in range(N):
    if i==0:
        a[0]=list(map(int,sys.stdin.readline().rstrip().split()))
    else:
        r,g,b=map(int,sys.stdin.readline().rstrip().split())
        if r+a[i-1][1] > r+a[i-1][2]: a[i][0]=r+a[i-1][2]
        else:a[i][0]=r+a[i-1][1]

        if g+a[i-1][0] > g+a[i-1][2]: a[i][1]=g+a[i-1][2]
        else:a[i][1]=g+a[i-1][0]

        if b+a[i-1][0] > b+a[i-1][1]: a[i][2]=b+a[i-1][1]
        else:a[i][2]=b+a[i-1][0]

print(min(a[N-1]))
