from itertools import permutations
perms = [''.join(p) for p in permutations('0123456789')]

dis = len(perms)

list = [2,3,5,7,11,13,17]

sum = 0
for n in range(0,dis):
    flag = True
    for x in range(1,8):
        num = int(perms[n][x] + perms[n][x+1] + perms[n][x+2])
        if num % list[x-1] != 0:
            flag = False
            break
    if flag:
        sum += int(perms[n])

print(sum)
