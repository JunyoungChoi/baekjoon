N = input()
a={}
for i in range(10):
    a[str(i)] = N.count(str(i))
max = (a['6']+a['9']+1) // 2
for i in range(10):
    if str(i) not in ['6','9']:
        if max < a[str(i)]:
            max = a[str(i)]
print(max)
