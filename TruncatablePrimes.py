def primes_sieve(n):
    size = n//2
    sieve = [1]*size
    limit = int(n**0.5)
    for i in range(1,limit):
        if sieve[i]:
            val = 2*i+1
            tmp = ((size-1) - i)//val
            sieve[i+val::val] = [0]*tmp
    return [2] + [i*2+1 for i, v in enumerate(sieve) if v and i>0]

def fermat(n):
	if n == 2:
		return True
	if not n & 1:
		return False
	return pow(2, n-1, n) == 1

def leftCut(n):
    l = []
    nn = n
    if n < 10:
        return False
    while nn > 0:
        w = list(str(nn))
        w[0] = '0'
        nn = int("".join(w))
        l.append(nn)

    for x in range(0,len(l)-1):
        if fermat(l[x]) == False:
            return False

    return True

def rigthCut(n):
    if n < 10:
        return False
    a = list(str(n))
    l = []
    l.append(n)
    while len(a) > 1:
        a.pop()
        w = int("".join(a))
        l.append(w)

    for x in range(0,len(l)):
        if fermat(l[x]) == False:
            return False
    return True

p = primes_sieve(1000000)

s = 0
for x in range(0,len(p)):
    if leftCut(p[x]) and rigthCut(p[x]):
        s += p[x]
print(s)
