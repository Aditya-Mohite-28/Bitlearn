nums = [11, 20, 12, 21, 3]

sums = {}
for n in nums:
    digit_sum = sum(int(digit) for digit in str(n))
    sums[digit_sum] = sums.get(digit_sum, 0) + 1

max_group_size = max(sums.values()) if sums else 0
print(max_group_size)