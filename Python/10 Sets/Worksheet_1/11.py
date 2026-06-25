word1 = "apple"
word2 = "orange"

uncommon = set(word1) ^ set(word2)

result = "".join([char for char in (word1 + word2) if char in uncommon])
seen = set()
ordered_result = "".join([c for c in result if not (c in seen or seen.add(c))])

print(f'"{ordered_result}"')