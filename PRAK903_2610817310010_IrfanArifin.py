n = int(input())
cities = []

for i in range(n):
    name, lat, lon = input().split()
    cities.append((name, float(lat), float(lon)))

for city in cities:
    print(f"{city[0]} : lintang {city[1]}, bujur {city[2]}")

print("Tujuan pertama :", cities[0])