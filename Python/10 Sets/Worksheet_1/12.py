words = ["education", "python", "sequoia"]
vowels = {"a", "e", "i", "o", "u"}

valid_words = [word for word in words if vowels <= set(word.lower())]

print(valid_words)1