words = ['abc', 'xyz', 'aba', '1221']
count = sum(1 for w in words if len(w) >= 2 and w[0] == w[-1])
print(f"Input: {words}")
print(f"Output: {count}")