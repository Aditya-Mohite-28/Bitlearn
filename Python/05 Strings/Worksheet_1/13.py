s1 = "red blue green"
s2 = "blue yellow red"

words1 = set(s1.split())
words2 = set(s2.split())
uncommon = list(words1.symmetric_difference(words2))
print(f"Uncommon words: {uncommon}")