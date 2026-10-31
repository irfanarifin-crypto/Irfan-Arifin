a, b = map(int, input().split())
x, y = a, b

print(x, y, end="")
while x != b:
    if a < b:
        x += 1
        y -= 1
    else:
        x -= 1
        y += 1
    print(" -", x, y, end="")
print()
