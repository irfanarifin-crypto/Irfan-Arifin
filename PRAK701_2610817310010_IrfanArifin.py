first = input("Nama Depan : ")
last = input("Nama Belakang : ")

full = first + " " + last

length = len((first + last).replace(" ", ""))

print("Nama Lengkap :", full)
print("Panjang Nama (tanpa spasi) :", length)