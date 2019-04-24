import sys
X=int(sys.stdin.readline())
for i in range(1,X+1):
    if X-i>0:
        X-=i
    else:
        break
if i%2==1:
    print(i-X+1,'/',X,sep='')
else:
    print(X,'/',i-X+1,sep='')
