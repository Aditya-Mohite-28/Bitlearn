import itertools

nums = [1, 2, 3]
result = [list(p) for p in itertools.permutations(nums)]
print(f"Input: {nums}")
print(f"Output: {result}")