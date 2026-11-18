n = int(input())
room = list(map(int, input().split()))

result = []
for i in range(n):
    result.append(room[i] * (i + 1))

print(*result)