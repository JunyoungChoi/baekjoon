import sys
num=[0,1,2]
for i in range(3,int(sys.stdin.readline().rstrip())+1):
    num.append(num[i-1] + num[i-2])
print(num[i] % 10007)
