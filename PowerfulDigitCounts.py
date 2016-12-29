s = 0
for a in range(1,100):
    for b in range(1,100):
        n = pow(a,b)
        if b == len(str(n)):
            s += 1
print(s)
