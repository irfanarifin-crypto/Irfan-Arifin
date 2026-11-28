n = int(input())
stock = {}

for i in range(n):
    name, amount = input().split()
    stock[name] = int(amount)

search = input()

for name in stock:
    print(name, ":", stock[name])

if search in stock:
    print("Stok", search, "saat ini :", stock[search])
else:
    print("Barang", search, "tidak ada di gudang")