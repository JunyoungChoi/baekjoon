import sys
num_list=[]
for n in range(int(sys.stdin.readline().rstrip())):
    order = sys.stdin.readline().rstrip().split()
    if 'push' in order:
        num_list.append(int(order[-1]))
    elif 'pop' in order:
        if num_list :
            print(num_list[0])
            del num_list[0]
        else:
            print(-1)
    elif 'size' in order:
        print(len(num_list))
    elif 'empty' in order:
        if num_list:
            print(0)
        else:
            print(1)
    elif 'front' in order:
        if num_list:
            print(num_list[0])
        else:
            print(-1)
    elif 'back' in order:
        if num_list:
            print(num_list[-1])
        else:
            print(-1)
