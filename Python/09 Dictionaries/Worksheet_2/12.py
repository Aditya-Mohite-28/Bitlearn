valuables = {'ring': 5, 'necklace': 9, 'watch': 2}

max_key = max(valuables, key=valuables.get)
min_key = min(valuables, key=valuables.get)

print(f"Max: '{max_key}', Min: '{min_key}'")