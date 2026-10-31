n, k = map(int, input().split())
total = 0

for i in range(1, n + 1):
    result = 0
    for j in range(i, 0, -1):
        if j != i:
            print(" + ", end="")
        print(f"({j} * {k})", end="")
        result += j * k
    print(f" = {result}")
    total += result

print(total)
