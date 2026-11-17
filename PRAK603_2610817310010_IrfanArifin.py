n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    a = input().split()
    b = input().split()
    result = []
    for i in range(n1):
        result.append(str(int(a[i]) * int(b[i])))
    print(" ".join(result))