room = int(input())
n = list(map(int, input().split()))

result = []
for i in range(room):
    result.append(n[i] * (i + 1))

print(*result)