list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]
result = list(set(list1) & set(list2))
print(f"Input: {list1}, {list2}")
print(f"Output: {result}")