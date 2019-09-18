N= int(input())
stack = []
stack_size = 0
answer=''
for i in range(N):
    order = input()
    if 'push' in order:
        t=order.split()
        stack.append(int(t[1]))
        stack_size +=1
    elif 'pop' in order :
        if stack_size == 0:
            answer+='-1\n'
        else:
            answer+=str(stack[-1])+'\n'
            del stack[-1]
            stack_size -=1
    elif 'size' in order:
        answer+=str(stack_size)+'\n'
    elif 'empty' in order :
        if stack_size == 0 :
            answer+='1\n'
        else:
            answer+='0\n'
    elif 'top' in order :
        if stack_size == 0 :
            answer+='-1\n'
        else:
            answer+=str(stack[-1])+'\n'
print(answer[:-1])
