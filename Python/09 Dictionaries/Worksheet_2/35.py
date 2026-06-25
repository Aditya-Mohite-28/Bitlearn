d = {'group1': {'b': 2, 'a': 1}, 'group2': {'c': 3, 'd': 0}}

sorted_nested = {k: sorted(v.items(), key=lambda item: item[1]) for k, v in d.items()}
print(sorted_nested)