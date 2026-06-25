import difflib

target = "apple"
word_list = ["apply", "apples", "ape", "maple"]
matches = difflib.get_close_matches(target, word_list, cutoff=0.6)
print(f"Close matches: {matches}")