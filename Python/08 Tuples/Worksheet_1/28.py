lst = [(1, 'a'), (2, 'b'), (3, 'c')]
list1, list2 = zip(*lst)
print(list(list1))
print(list(list2))