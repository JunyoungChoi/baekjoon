import sys
while True :
    A,B=sys.stdin.readline().split()
    if (A=='0') & (B=='0'):
        break
    else:
        print(int(A)+int(B),end='\n')
