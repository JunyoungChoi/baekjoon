import sys
for i in range(int(sys.stdin.readline().rstrip())):
    array_size, index = map(int, sys.stdin.readline().rstrip().split())
    que = list(map(int, sys.stdin.readline().rstrip().split()))
    chk = [0 for t in range(array_size)]
    chk[index] = 'T'

    count = 0
    while True:
        if que[0] == max(que):
            count += 1
            if chk[0] == 'T':
                print(count)
                break
            else:
                que.pop(0)
                chk.pop(0)
        else:
            que.append(que.pop(0))
            chk.append(chk.pop(0))
