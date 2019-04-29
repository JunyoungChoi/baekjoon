import sys
num=[]
equation=[]
count = 1
is_possible = True
for i in range(int(sys.stdin.readline().rstrip())):
    tem=int(sys.stdin.readline().rstrip())
    while count<=tem:
        num.append(count)
        equation.append('+')
        count+=1
    if num[-1] == tem :
        del num[-1]
        equation.append('-')
    else:
        is_possible = False
      
if is_possible:
    for i in equation:
        print(i)
else:
    print('NO')
