import sys
num_list = [x for x in range(1,int(sys.stdin.readline().rstrip())+1)]
tem=2
while tem<=len(num_list):
    num_list = num_list[2:]+num_list[1:2]
print(num_list[0])
