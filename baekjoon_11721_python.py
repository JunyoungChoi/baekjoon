A=input()
cnt=0
for i in A:
    print(i,end='')
    cnt+=1
    if cnt==10:
        print()
        cnt=0
