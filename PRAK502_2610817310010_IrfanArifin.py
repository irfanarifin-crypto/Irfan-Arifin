def absolute(number):
    if number < 0:
        return -number
    return number

def count(value1, value2):
    return absolute(value1 - value2)

a, c, b, d = map(int, input().split())

Result = count(a, b) + count(c, d)
print(absolute(Result))