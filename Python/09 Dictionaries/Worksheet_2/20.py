d = {'a': 100, 'b': 200, 'c': 300}, 
lst = ['b', 'c', 'd']

d = d[0] if isinstance(d, tuple) else d
intersected = {k: d[k] for k in lst if k in d}
print(intersected)