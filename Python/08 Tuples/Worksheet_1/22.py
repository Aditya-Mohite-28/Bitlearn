lst = [(1, 2), (10, 11), (3, 44)]
def total_digits(tup):
    return sum(len(str(abs(x))) for x in tup)

print(sorted(lst, key=total_digits))