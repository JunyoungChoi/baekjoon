# 두 정수 N과 F가 주어진다.지민이는 정수 N의 가장 뒤 두자리를 적절히 바꿔서 N을 F로 나누어 떨어지게 만드려고 한다.만약 가능한 것이 여러가지이면, 뒤 두자리를 가능하면 작게 만드려고 한다.
# 예를 들어, N = 275이고, F = 5이면, 답은 00이다. 200이 5로 나누어 떨어지기 때문이다.N = 1021이고, F = 11이면, 정답은 01인데, 1001이 11로 나누어떨어지기 때문이다.
ans,N,F=0,0,0
N=int(input('첫번째 수 : '))
F=int(input('두번째 수 : '))
N=(N//100)*100
for ans in range(0,100):
  if(N+ans) %F==0:
    break
print("%02d"%ans)
