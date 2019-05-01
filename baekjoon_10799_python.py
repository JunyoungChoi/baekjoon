import sys
stick = sys.stdin.readline().rstrip()
stick = stick.replace('()','R')
stick_cnt=0
ans=0
for i in stick:
    if i =='(':
        stick_cnt+=1
        ans+=1
    elif i =='R':
        ans += stick_cnt
    elif i==')':
        stick_cnt-=1
print(ans)
