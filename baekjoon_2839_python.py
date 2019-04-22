N=int(input())
for i in range(0,N):
    if (N-i*3) %5 ==0:
        print(((N-i*3)//5) + i)
        break
    elif (N-i*3) <0:
        print(-1)
        break
