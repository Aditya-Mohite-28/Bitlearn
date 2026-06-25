s = "23,45.89,78.90"
table = s.maketrans({',': '.', '.': ','})
print(s.translate(table))