n, m = map(int, input().split())
number = list(map(int, input().split()))

for i in range(n):
    row = number [i * m:(i + 1) * m]
    print(" ".join(map(str, row)))