from collections import Counter

marbles = ["red", "blue", "red", "green", "blue", "red"]
counts = Counter(marbles)
min_bags_needed = max(counts.values())
print(min_bags_needed)