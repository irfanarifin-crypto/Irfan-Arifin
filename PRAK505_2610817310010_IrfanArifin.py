def Biodata(year, name, place):
    current_year = 2020
    age = current_year - year

    print("Perkenalkan Nama Saya :", name)
    print("Umur Saya :", age)
    print("Saya Adalah Angkatan :", current_year)
    print("Asal Saya dari :", place)

yearBirth = int(input())
A = input()
B = input()
Biodata(yearBirth, A, B)