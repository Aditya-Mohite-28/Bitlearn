import string


def is_pangram(text):
    alphabet = set(string.ascii_lowercase)
    if alphabet.issubset(set(text.lower())):
        return "Is pangram: Yes"
    return "Is pangram: No"


print(is_pangram("The quick brown fox jumps over the lazy dog"))