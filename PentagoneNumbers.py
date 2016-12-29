import math

def func(x):
    return int((x*(3*x-1))/2)

def inverse(x):
    num = (1/6) * (math.sqrt(24*x+1)+1)
    return num == int(num)

f = True
x = 0
while f:
    x += 1
    for y in range(x-1, 0, -1):
        if inverse(func(x) + func(y)) and inverse(func(x) - func(y)):
            print(func(x) - func(y))
            f = False
