def min_max(numbers):
    if not numbers:
        return None, None
    return min(numbers), max(numbers)

small, large = min_max([8, 3, 5, 2, 10])
print("Smallest:", small)
print("Largest:", large)