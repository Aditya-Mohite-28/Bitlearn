def pad_string(text, length, char):
    return text.rjust(length, char)


print(pad_string("cat", 6, "*"))