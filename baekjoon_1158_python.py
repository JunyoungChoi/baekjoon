import sys
n,m = map(int, sys.stdin.readline().rstrip().split())

a=[]
for i in range(1, n+2):
    a.append(i)
print("<", end="")
i = -1
for j in range(n, 0, -1):
    i = (i + m) % j
    if j != 1:
        print("%d, " % a[i], end="")
    else:
        print("%d" % a[i], end="")
    for k in range(i, j):
        a[k] = a[k + 1]
    i -= 1
print(">")
