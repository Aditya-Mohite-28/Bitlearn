import copy

original = {"a": [1, 2]}
shallow_copy = original.copy()
deep_copy = copy.deepcopy(original)

shallow_copy["a"].append(3)

print(original)
print(shallow_copy)
print(deep_copy)