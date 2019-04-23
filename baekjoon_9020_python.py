def isPrimeNum(n: int) -> bool :
    if n < 2:
        return False
    if n in (2, 3):
        return True
    for i in range(2,int(n**0.5)+1,1):
        
        if n%i is 0:
            return False
    return True
n=int(input())
for i in range(0,n):
    num=int(input())
    
    if isPrimeNum(int(num/2)) is True:
        print(int(num/2), int(num/2))
        continue
    else:
        for j in range(1,int(num/2)):
            if isPrimeNum(int(num/2-j)) is True and isPrimeNum(int(num/2+j)) is True :
                print(int(num/2-j),int(num/2+j))
                break
    
    
