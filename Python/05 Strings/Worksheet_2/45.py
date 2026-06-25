def find_all_indices(text, sub):
    indices = []
    start = 0
    while True:
        start = text.find(sub, start)
        if start == -1:
            break
        indices.append(start)
        start += 1
    return indices


print(find_all_indices("abracadabra", "abra"))