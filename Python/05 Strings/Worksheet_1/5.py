s = "education"
vowels = set("aeiouAEIOU")
count = sum(1 for char in s if char in vowels)
print(f"Vowels Count: {count}")