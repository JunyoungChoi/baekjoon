x,y=map(int,input().split())
day=['SUN','MON','TUE','WED','THU','FRI','SAT']
date=[0,31,28,31,30,31,30,31,31,30,31,30]
print(day[sum((date[0:x]),y)%7])
