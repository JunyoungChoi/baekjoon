import sys
string = ''

while True:
    string = sys.stdin.readline().rstrip()
    if string == '.':
        break
    TF = True
    string_list=[]
    for i in string:
        if (i ==')'  or i ==']') and len(string_list) ==0:        
            TF=False
            break
        if i == '(' or i == '[':
            string_list.append(i)
        elif i == ')' :
            if string_list[len(string_list)-1] =='(':
                string_list.pop()
                continue
            else:     
                TF=False
                break
        elif i == ']':
            if string_list[len(string_list)-1] == '[':
                string_list.pop()
                continue
            else:                
                TF=False
                break
    if TF and len(string_list) ==0:
        print('yes')
    else :
        print('no')
        
