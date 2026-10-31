while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    choice = int(input("Masukkan Pilihan : "))

    if choice == 5:
        print("Terimakasih, telah menggunakan kalkulator Irfan Arifin")
        break
    elif choice in (1, 2, 3, 4):
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))
        if choice == 1:
            print(f"Hasil penjumlahan antara {a:.2f}	dengan {b:.2f} adalah {a+b:.2f}")
        elif choice == 2:
            print(f"Hasil pengurangan antara {a:.2f}	dengan {b:.2f} adalah {a-b:.2f}")
        elif choice == 3:
            print(f"Hasil perkalian antara {a:.2f}	dengan {b:.2f} adalah {a*b:.2f}")
        else:
            print(f"Hasil pembagian antara {a:.2f}	dengan {b:.2f} adalah {a/b:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")
