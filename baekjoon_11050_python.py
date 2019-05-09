from itertools import combinations
import sys

N,K = map(int,sys.stdin.readline().rstrip().split())
sum=1
for i in range(K,0,-1):
    sum*=N
    sum/=i
    N-=1
print(round(sum))
