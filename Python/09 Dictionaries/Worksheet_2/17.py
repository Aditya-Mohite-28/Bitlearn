d = {'x': {'p': 1}, 'y': {'q': 2}}

flipped = {}
for outer_k, inner_dict in d.items():
    for inner_k, val in inner_dict.items():
        if inner_k not in flipped:
            flipped[inner_k] = {}
        flipped[inner_k][outer_k] = val

print(flipped)