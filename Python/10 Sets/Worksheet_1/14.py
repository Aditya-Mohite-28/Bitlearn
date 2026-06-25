sentence = "The quick brown fox jumps over a lazy dog"
letters = {char.lower() for char in sentence if char.isalpha()}

if len(letters) == 26:
    print("Yes")
else:
    print("No")