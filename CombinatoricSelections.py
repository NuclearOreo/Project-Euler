import operator as op
def ncr(n, r):
    r = min(r, n-r)
    if r == 0: return 1
    numer = reduce(op.mul, xrange(n, n-r, -1))
    denom = reduce(op.mul, xrange(1, r+1))
    return numer//denom

count = 0

for a in range(0,101):
    for b in range(0,a):
        if ncr(a,b) > 1000000:
            count += 1

print(count)
