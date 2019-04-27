n = int(input())
count=2
for i in range (n):
    count += count -1
print(count*count)
