
count = 0
coins = [1,2,5,10,20,50,100,200]

def bf(s, list, p, goal):
    global count
    if s == goal:
        count += 1
        return

    if s > goal:
        return

    if p >= len(list):
        return

    bf(s+list[p],list,p,goal)
    bf(s,list,p+1,goal)

bf(0,coins,0,200)
print(count)
