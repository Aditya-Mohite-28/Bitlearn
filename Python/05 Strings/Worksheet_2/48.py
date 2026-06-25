def filter_by_substrings(words, subs):
    return [word for word in words if all(sub in word for sub in subs)]


items = ["applebanana", "apple", "banana", "applebananacherry"]
target_subs = ["apple", "banana"]
print(filter_by_substrings(items, target_subs)) 