d = {'c': [3, 1], 'a': [2, 4], 'b': [5, 1]}

sorted_res = sorted([(k, sorted(v)) for k, v in d.items()])
print(sorted_res)