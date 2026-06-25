def is_palindrome(lst):
    return lst == lst[::-1]

nums = [1, 2, 3, 2, 1]
result = is_palindrome(nums)
print(f"Input: {nums}")
print(f"Output: {result}")