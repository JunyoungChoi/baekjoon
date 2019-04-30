import sys
num=[]
for i in range(int(sys.stdin.readline())):
    x,y=map(int,(sys.stdin.readline().split()))
    num.append([x,y])
num=sorted(num)
for i,j in num:
    print(i,j)
