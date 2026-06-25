d = {'a': 5, 'b': 10, 'c': 15, 'd': 'big'}
limit = 10

filtered = {k: v for k, v in d.items() if not isinstance(v, (int, float)) or v <= limit}
print(filtered)