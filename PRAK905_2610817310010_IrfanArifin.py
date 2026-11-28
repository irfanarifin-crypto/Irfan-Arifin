n = int(input())
stock = {}

for i in range(n):
    name, amount = input().split()
    stock[name] = int(amount)

m = int(input())
results = []

for i in range(m):
    name, sold = input().split()
    sold = int(sold)

    if name not in stock:
        results.append(f"Barang {name} tidak ada")
    elif stock[name] < sold:
        results.append(f"Stok {name} tidak cukup")
    else:
        stock[name] -= sold
        results.append(f"Terjual {name} {sold}, sisa {stock[name]}")

for line in results:
    print(line)

print("Stok akhir :", stock)