msg = "hello world"
vowels = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"}

vowel_count = sum(1 for char in msg if char in vowels)

print(vowel_count)