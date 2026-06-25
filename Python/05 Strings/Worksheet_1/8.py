from collections import Counter

s = "banana"
counts = Counter(s)
max_freq = max(counts, key=counts.get)
print(f"Maximum frequency character: '{max_freq}'")