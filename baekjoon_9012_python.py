import sys

for n in range(int(sys.stdin.readline().rstrip())):
    string = sys.stdin.readline().rstrip()
    TF = True
    string_list=[]
    for i in string:
        if i ==')'   and len(string_list) ==0:        
            TF=False
            break
        if i == '(' :
            string_list.append(i)
        elif i == ')' :
            if string_list[len(string_list)-1] =='(':
                string_list.pop()
                continue
            else:     
                TF=False
                break
    if TF and len(string_list) ==0:
        print('YES')
    else :
        print('NO')
        
