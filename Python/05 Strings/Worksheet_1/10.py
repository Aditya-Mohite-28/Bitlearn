import random
import string

target = "abc"
characters = string.ascii_lowercase
attempts = 0

while True:
    attempts += 1
    guess = "".join(random.choice(characters) for _ in range(len(target)))
    if guess == target:
        print(f"Randomly generated '{target}' after {attempts} attempts")
        break