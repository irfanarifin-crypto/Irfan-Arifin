word = input()
lower_word = word.lower()

if lower_word == lower_word[::-1]:
    print(f"Kata '{word}' adalah palindrom")
else:
    print(f"Kata '{word}' bukan palindrom")