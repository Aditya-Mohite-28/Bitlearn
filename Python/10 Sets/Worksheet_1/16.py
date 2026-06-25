word = "lamp"

clean_word = [c for c in word.lower() if c.isalpha()]

if len(set(clean_word)) == len(clean_word):
    print("Yes")
else:
    print("No")