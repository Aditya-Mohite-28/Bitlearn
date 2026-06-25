text = "apple"
frequency = {}
for letter in text:
    frequency[letter] = frequency.get(letter, 0) + 1
print(frequency)