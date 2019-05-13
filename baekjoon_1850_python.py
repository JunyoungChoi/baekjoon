import sys
from math import gcd
A,B=map(int,sys.stdin.readline().rstrip().split())
print('1'*gcd(A,B),end='')
