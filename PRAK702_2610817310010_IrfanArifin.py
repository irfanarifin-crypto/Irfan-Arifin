word = input().lower()

if word == word[::-1]:
    print(f"Kata '{word}' adalah palindrom")
else:
    print(f"Kata '{word}' bukan palindrom")