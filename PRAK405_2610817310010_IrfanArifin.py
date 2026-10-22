n, k = map(int, input().split())
total = 0

for i in range(1, n + 1):
    hasil = 0
    for j in range(i, 0, -1):
        if j != i:
            print(" + ", end="")
        print(f"({j} * {k})", end="")
        hasil += j * k
    print(f" = {hasil}")
    total += hasil

print(total)