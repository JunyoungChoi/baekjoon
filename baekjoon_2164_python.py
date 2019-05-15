n = int(input())

m = 1
while m < n:
    m *= 2
m -= (2 * (m - n))

print(m)
