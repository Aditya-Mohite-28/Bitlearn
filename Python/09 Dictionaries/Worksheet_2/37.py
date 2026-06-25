nums = [10, 15]

factor_counts = {}
for n in nums:
    for i in range(1, n + 1):
        if n % i == 0:
            factor_counts[i] = factor_counts.get(i, 0) + 1

print(factor_counts)