def reverse_at(lst, pos):
    return lst[:pos] + lst[pos:][::-1]

nums = [1, 2, 3, 4, 5, 6]
position = 3
result = reverse_at(nums, position)
print(f"Input: {nums}, position: {position}")
print(f"Output: {result}")