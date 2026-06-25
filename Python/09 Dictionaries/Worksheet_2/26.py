d = {'m': 1, 'n': 2, 'o': 1}

grouped = {}
for k, v in d.items():
    grouped.setdefault(v, []).append(k)

print(grouped)