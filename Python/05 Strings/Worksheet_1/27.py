from itertools import groupby

s = "aabccddd"
freq = {k: len(list(g)) for k, g in groupby(s)}
print(freq)