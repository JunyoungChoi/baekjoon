import sys
for i in range(int(sys.stdin.readline().rstrip())):
    A,B=map(int,sys.stdin.readline().rstrip().split())
    print("Case #{}: {}".format(i+1,A+B))
