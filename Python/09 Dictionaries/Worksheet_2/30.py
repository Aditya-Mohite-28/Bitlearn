words = ['bat', 'tab', 'eat', 'tea', 'tan', 'nat']

groups = {}
for word in words:
    sorted_word = ''.join(sorted(word))
    groups[sorted_word] = groups.get(sorted_word, 0) + 1

max_subset_size = max(groups.values()) if groups else 0
print(max_subset_size)