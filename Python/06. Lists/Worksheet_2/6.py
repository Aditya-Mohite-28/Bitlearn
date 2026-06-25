tuples_list = [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]
result = sorted(tuples_list, key=lambda x: x[-1])
print(f"Input: {tuples_list}")
print(f"Output: {result}")