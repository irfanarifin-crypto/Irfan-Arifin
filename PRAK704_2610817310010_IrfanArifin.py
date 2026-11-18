text = input()

if len(text) > 20:
    print(text[:20] + "...")
else:
    print(text)