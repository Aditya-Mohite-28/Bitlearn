t = ((1, 2), (2, 3), (4, 5))
result = set(x for sub in t for x in sub)
print(result)