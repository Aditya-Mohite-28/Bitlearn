def split_chunks(text, n):
    return [text[i : i + n] for i in range(0, len(text), n)]


print(split_chunks("abcdefgh", 3))