import sys
x1,y1 = map(int,sys.stdin.readline().rstrip().split())
x2,y2=map(int,sys.stdin.readline().rstrip().split())
x3,y3 = map(int,sys.stdin.readline().rstrip().split())
S=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1)
if S>0:
    print(1)
elif S<0:
    print(-1)
else:
    print(0)
