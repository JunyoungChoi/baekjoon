import sys
data = []  
mList = []
pointer = 0
count = 0

N, M = map(int, sys.stdin.readline().rstrip().split())
for i in range(1, N + 1):
    data.append(i)
for j in map(int, sys.stdin.readline().rstrip().split()):
    mList.append(j)


a=[]
def dial(num, p):
    right = 0
    left = 0

    while True:
        if data[p] == num:
            left = len(data) - right
            break
        else:
            right += 1
            p += 1

    if right < left:
        if len(data) == 0: return 0, right
        return p, right
    else:
        if len(data) == 0: return 0, left
        return p , left

for i in mList:
    pointer=0
    rPointer, rCount = dial(i, pointer)
    temp=data[rPointer+1:]
    temp+=data[:rPointer]
    data=temp
    count += rCount
print(count)
