def max_sum_subsequence(lst):
    positives = [x for x in lst if x > 0]
    return sum(positives) if positives else max(lst)

nums = [2, -1, 2, 3, 4, -5]
result = max_sum_subsequence(nums)
print(f"Input: {nums}")
print(f"Output: {result}")