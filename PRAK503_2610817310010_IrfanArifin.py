def maximum(a, b):
    if a > b:
        return a
    return b

def minimum(a, b):
    if a < b:
        return a
    return b

limit = 0
max = -100000
minim = 100000
number = int(input())
data = list(map(int, input().split()))

while limit < number:
    value = data[limit]
    max = maximum(max, value)
    minim = minimum(minim, value)
    limit += 1

print(max, minim)