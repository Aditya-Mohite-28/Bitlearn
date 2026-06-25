nums = [1, 2, 3, 2, 4, 2, 5]
target = 2
result = [x for x in nums if x != target]
print(f"Input: {nums}, element to remove: {target}")
print(f"Output: {result}")