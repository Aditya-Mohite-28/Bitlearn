d = {'x': 100, 'y': 'hello', 'z': 200}

only_ints = {k: v for k, v in d.items() if type(v) is int}
print(only_ints)