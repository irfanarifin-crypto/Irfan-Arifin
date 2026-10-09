number = int(input())

if number < 0 or number > 99:
    print("Anda Menginput Melebihi Limit Bilangan")
elif number == 0:
    print("Nol")
elif number <= 9:
    print("Satuan")
elif number >= 11 and number <= 19:
    print("Belasan")
else:
    print("Puluhan")