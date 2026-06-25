from collections import Counter

s = "statistics"
counts = Counter(s)
least_freq = min(counts, key=counts.get)
print(f"Least frequent character: '{least_freq}'")