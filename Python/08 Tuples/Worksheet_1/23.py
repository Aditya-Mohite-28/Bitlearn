lst = [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
new_value = 100
result = [tup[:-1] + (new_value,) for tup in lst]
print(result)