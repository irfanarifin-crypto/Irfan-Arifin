sentence = input("Kalimat : ").lower()
vowel = 0
consonant = 0

for c in sentence:
    if c in "aiueo":
        vowel += 1
    elif c.isalpha():
        consonant += 1

print("Jumlah Vokal :", vowel)
print("Jumlah Konsonan :", consonant)