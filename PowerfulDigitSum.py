s = 0
for a in range(0,100):
    for b in range(0,100):
        n = str(pow(a,b))
        t = 0
        for x in range(0,len(n)):
            t += int(n[x])
            if s < t:
                s = t
print(s)
