tuples_list = [(1, 'a'), (2, 'b'), (3, 'c')]
list1, list2 = map(list, zip(*tuples_list))
print(f"Input: {tuples_list}")
print(f"Output: {list1}, {list2}")