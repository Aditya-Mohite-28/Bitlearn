orders = ['latte', 'espresso', 'latte', 'tea', 'espresso', 'latte']

menu_count = {}
for item in orders:
    menu_count[item] = menu_count.get(item, 0) + 1

print(menu_count)