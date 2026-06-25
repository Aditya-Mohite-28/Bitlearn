s = "hello"
k = 2
k = k % len(s)
rotated = s[-k:] + s[:-k]
print(rotated)