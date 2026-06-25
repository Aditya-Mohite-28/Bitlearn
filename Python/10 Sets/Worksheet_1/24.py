from itertools import combinations

kids = {"Amy", "Bob", "Cara", "Dan", "Eva"}
size = 3
all_teams = list(combinations(kids, size))
print(all_teams[0])