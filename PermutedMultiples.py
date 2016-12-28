n = 1
while True:
    count = 0
    for x in range(2,7):
        if len(str(n)) == len(str(x*n)) and sorted(str(n)) == sorted(str(x*n)):
            count += 1

    if count == 5:
        print(n)
        break
    n += 1
