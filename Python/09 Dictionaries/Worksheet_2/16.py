lst = ['a', 'b', 'c', 'd']

nested = {}
for item in reversed(lst):
    nested = {item: nested}

print(nested)