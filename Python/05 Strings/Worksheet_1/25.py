s = "I have one apple and two oranges."
mapping = {"one": "1", "two": "2", "three": "3", "four": "4", "five": "5"}

words = s.split()
res = [mapping.get(word.strip(".,"), word) for word in words]
print(" ".join(res))