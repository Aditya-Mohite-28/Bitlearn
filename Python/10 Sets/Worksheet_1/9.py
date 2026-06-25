yesterday = [1, 2, 3, 4]
today = [1, 4, 2]

lost_element = set(yesterday) - set(today)

print(next(iter(lost_element)))