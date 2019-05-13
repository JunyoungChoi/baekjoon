import sys
j=1
for i in range(int(sys.stdin.readline().rstrip()),0,-1):
    print(' '*(i-1),'*'*(j*2-1),sep='',end='\n')
    j+=1
