E,S,M=map(int,input().split())
if E==15:
    E=0
if S==28:
    S=0
if M==19:
    M=0
for year in range (1,10000):
    if E == (year%15):
        if S == (year %28):
            if M == (year %19):
                print(year)
                break
