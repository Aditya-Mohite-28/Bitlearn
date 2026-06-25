def remove_duplicates_ordered(lst):
    seen = set()
    return [x for x in lst if not (x in seen or seen.add(x))]

nums = [1, 2, 2, 3, 4, 4, 5, 6, 5]
result = remove_duplicates_ordered(nums)
print(f"Input: {nums}")
print(f"Output: {result}")