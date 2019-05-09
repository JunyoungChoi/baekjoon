import sys
from functools import reduce
try:
    print(reduce(lambda x, y :x*y,range(1,int(sys.stdin.readline().rstrip())+1)))
except:
    print(1)
