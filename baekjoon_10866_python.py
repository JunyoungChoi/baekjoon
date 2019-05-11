import sys
num=[]
for i in range(int(sys.stdin.readline().rstrip())):
    order=sys.stdin.readline().rstrip()
    if 'push_front' in order:
        order_split=order.split()
        num.insert(0,int(order_split[-1]))
    elif 'push_back' in order:
        order_split=order.split()
        num.append(int(order_split[-1]))
    elif 'pop' in order:
        if num:
            if 'front' in order:
                print(num[0])
                del num[0]
            elif 'back' in order:
                print(num[-1])
                del num[-1]
        else:
            print(-1)
    elif 'size' in order:
        print(len(num))
    elif 'empty' in order:
        if num:
            print(0)
        else:
            print(1)
    elif 'front' in order:
        if num:
            print(num[0])
        else:
            print(-1)
    elif 'back' in order:
        if num:
            print(num[-1])
        else:
            print(-1)
        
