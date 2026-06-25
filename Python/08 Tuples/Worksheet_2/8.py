t = (('Red', 'White', 'Blue'), ('Green', 'Pink', 'Purple'), ('Orange', 'Yellow', 'Lime'))
check = 'White'
result = any(check in sub for sub in t)
print(result)