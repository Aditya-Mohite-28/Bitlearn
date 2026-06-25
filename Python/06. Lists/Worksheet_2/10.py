words = ['hello', 'world', 'python', 'is', 'great']
n = 4
result = [w for w in words if len(w) > n]
print(f"Input: {words}, n = {n}")
print(f"Output: {result}")