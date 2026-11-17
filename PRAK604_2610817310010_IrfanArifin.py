code = input()
letter = input()

if len(code) != len(letter):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    star = 0
    numberSign = 0

    for i in range(len(code)):
        if code[i] != letter[i]:
            print("#", end="")
            numberSign += 1
        elif code[i] == " ":
            print(" ", end="")
        else:
            print("*", end="")
            star += 1

    print()
    print("* =", star)
    print("# =", numberSign)

    if star >= numberSign:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")