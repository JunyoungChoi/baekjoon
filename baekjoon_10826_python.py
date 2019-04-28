import sys
n=int(sys.stdin.readline().rstrip())
a, b= 1,0
for i in range(n):
    a,b = b,a+b
print(b)
