def isperm(x,y):
    if len(x) == len(y) and sorted(x) == sorted(y):
        return True
    return False

res = 0
for x in range(1,10000):
    string = ''
    i = 1
    while len(string) < 9:
        string += str(x*i)
        i += 1
    if isperm('123456789',string) and res < int(string):
        res = int(string)

print(res)
