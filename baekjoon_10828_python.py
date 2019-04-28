N= int(input())
stack = []
stack_size = 0
for i in range(N):
    order = input()
    if 'push' in order:
        stack.append(int(order[5:]))
        stack_size +=1
    elif 'pop' in order :
        if stack_size is 0:
            print(-1)
        else:
            print(stack[stack_size-1])
            del stack[stack_size-1]
            stack_size -=1
    elif 'size' in order:
        print(stack_size)
    elif 'empty' in order :
        if stack_size is 0 :
            print(1)
        else:
            print(0)
    elif 'top' in order :
        if stack_size is 0 :
            print(-1)
        else:
            print(stack[stack_size-1])
