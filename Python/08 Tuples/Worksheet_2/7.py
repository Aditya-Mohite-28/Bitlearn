lst = [(1, 2, 3), (4, 5), (6, 7, 8)]
result = [tup for tup in lst if len(tup) == 3]
print(result)