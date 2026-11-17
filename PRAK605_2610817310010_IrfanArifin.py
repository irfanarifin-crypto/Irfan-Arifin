n = int(input())

input()  # line "Matriks A"
a = []
for i in range(n):
    a.append(list(map(int, input().split())))

input()  # line "Matriks B"
b = []
for i in range(n):
    b.append(list(map(int, input().split())))

print("Matriks AXB")
for i in range(n):
    row = []
    for j in range(n):
        result = 0
        for k in range(n):
            result += a[i][k] * b[k][j]
        row.append(str(result))
    print(" ".join(row))