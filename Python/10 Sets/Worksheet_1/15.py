A = {"abc", "defg", "xyz"}
B = {"mnopq", "rstuv", "wxyz"}

for word_a in A:
    for word_b in B:
        combined_letters = set(word_a + word_b)
        if len(combined_letters) == 26: 
            print(f"Complete Pair: {word_a} + {word_b}")