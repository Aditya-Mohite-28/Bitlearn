lst = [(1, 2), (-3, 4), (5, 6)]
result = [tup for tup in lst if all(x > 0 for x in tup)]
print(result)