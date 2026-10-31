def digits_number(n):
    if n == 0:
        return 0
    return n % 10 + digits_number(n // 10)

n = int(input())
print(f"Jumlah digit dari {n} adalah {digits_number(n)}")
