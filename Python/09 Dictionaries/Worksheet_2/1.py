stock = {'apples': 14, 'bananas': 22, 'rice': 12}
query = 'apples'

if query in stock and stock[query] > 0:
    print(f"Yes, {query} are in stock!")
else:
    print(f"No, {query} are out of stock.")