import sys
N1,N2=map(int,sys.stdin.readline().rstrip().split())
ans=1
for i in range(2,min(N1,N2)+1):
    if N1%i==0 and N2%i==0:
        ans=i
print(ans,'\n',N1*N2//ans,sep='')
