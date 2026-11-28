scores = list(map(int, input().split()))

scores.sort()

print("Nilai urut :", scores)
print("Tertinggi :", max(scores))
print("Terendah :", min(scores))
print("Rata-rata :", f"{sum(scores) / len(scores):.2f}")