f = open("p042_words.txt","r")
text = f.read()

def triangleFunc(n):
    return int(1/2*n*(n+1))

text = text.split(',')

count = 0

for x in range(0,len(text)):
    word = text[x]
    total = 0
    for i in range(1,len(word)-1):
        total += ord(word[i]) - 64

    i = 1
    while True:
        t = triangleFunc(i)
        if t == total:
            count += 1
            break
        elif t > total:
            break
        i += 1

print(count)
