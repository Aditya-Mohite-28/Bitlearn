words = ['listen', 'silent', 'enlist', 'hello', 'ohlle']

groups = {}
for word in words:
    sorted_word = ''.join(sorted(word))
    groups.setdefault(sorted_word, []).append(word)

print(list(groups.values()))