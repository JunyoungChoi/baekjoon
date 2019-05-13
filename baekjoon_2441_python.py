import sys
j=0
for i in range(int(sys.stdin.readline().rstrip()),0,-1):
    print(' '*j,'*'*i,sep='',end='\n')
    j+=1
