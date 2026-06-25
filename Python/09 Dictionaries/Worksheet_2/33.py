d = {'x': [5, 5], 'y': [1, 2, 3], 'z': [10]}

sorted_by_sum = sorted(d.items(), key=lambda item: sum(item[1]))
print(sorted_by_sum)