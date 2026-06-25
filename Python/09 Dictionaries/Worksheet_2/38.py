s = "abc"

distinct_substrings = set()
n = len(s)

for i in range(n):
    for j in range(i + 1, n + 1):
        distinct_substrings.add(s[i:j])

print(len(distinct_substrings))