d = {'hello': 1, 'world': 2, 'hell': 3}
substring = 'hell'

matching_keys = [k for k in d if substring in k]
print(f"Keys containing '{substring}': {matching_keys}")