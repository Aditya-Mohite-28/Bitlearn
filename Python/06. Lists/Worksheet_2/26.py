def union_intersection(l1, l2):
    s1, s2 = set(l1), set(l2)
    return list(s1 | s2), list(s1 & s2)

list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]
union_res, inter_res = union_intersection(list1, list2)
print(f"Input: {list1}, {list2}")
print(f"Union: {union_res}")
print(f"Intersection: {inter_res}")