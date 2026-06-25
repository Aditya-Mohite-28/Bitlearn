def remove_after(text, sub):
    idx = text.find(sub)
    if idx != -1:
        return text[: idx + len(sub)]
    return text


print(remove_after("abcdeFGhiJK", "FG"))