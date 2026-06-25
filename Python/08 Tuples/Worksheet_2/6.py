t = (1, 2, 2, 3, 3, 3)
result = {x: t.count(x) for x in set(t)}
print(result)