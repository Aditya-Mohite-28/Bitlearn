def replace_multiple(text, replacements):
    words = text.split()
    for i, word in enumerate(words):
        clean_word = word.strip(".,!?;:")
        if clean_word in replacements:
            words[i] = word.replace(clean_word, replacements[clean_word])
    return " ".join(words)


string_data = "I like apples and bananas."
replace_dict = {"apples": "oranges", "bananas": "grapes"}
print(replace_multiple(string_data, replace_dict))