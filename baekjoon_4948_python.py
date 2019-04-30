num = [x for x in range(1,246913)]
num.insert(0,1)
for i in range(2,246913):
    j=2 
    while 246912>=i*j: 
        num[i*j] = 1 
        j+=1 
while True: 
    n = int(input())
    if n<=0:
        break
    count = 0
    for l in num:
        if l != 1 and n<l and l<=2*n:
            count +=1
    print(count)
