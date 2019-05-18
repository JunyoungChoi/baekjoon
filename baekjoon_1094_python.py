import sys
length = int(sys.stdin.readline().rstrip())
n = 64
while n > length:
    n = n/2
lists = [n]
sum=0
count=0
while n != 1:
    n = n/2
    lists.append(n)
for i in lists:
    if sum+i <= length:
        sum = sum +i
        count = count+1
print(count)
