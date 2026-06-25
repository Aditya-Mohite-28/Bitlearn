def find_char_position(words, k, char):
    if 1 <= k <= len(words):
        target_word = words[k - 1]
        if char in target_word:
            return target_word.index(char)
    return -1


words_list = ["hello", "world"]
k_val = 2
char_to_find = "r"
print("Position:", find_char_position(words_list, k_val, char_to_find))