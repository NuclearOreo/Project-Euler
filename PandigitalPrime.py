import random
from itertools import permutations
perms = [''.join(p) for p in permutations('1234567')]

def FermatPrimalityTest(number):
    if (number > 1):
        for time in range(3):
            randomNumber = random.randint(2, number)-1
            if ( pow(randomNumber, number-1, number) != 1 ):
                return False
        return True
    else:
        return False

l = []
for x in range(0,len(perms)):
    n = int(perms[x])
    if FermatPrimalityTest(n):
        l.append(n)

print(l[len(l)-1])
