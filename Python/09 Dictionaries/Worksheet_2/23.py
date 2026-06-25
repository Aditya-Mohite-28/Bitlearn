dicts = [{'a': 1, 'b': 2}, {'x': 1, 'y': 2, 'z': 3}, {'k': 9}]

biggest = max(dicts, key=len)
print(biggest)