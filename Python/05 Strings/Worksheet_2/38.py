def reverse_sort_string(text):
    return "".join(sorted(text, reverse=True))


input_str = "python"
print(reverse_sort_string(input_str))