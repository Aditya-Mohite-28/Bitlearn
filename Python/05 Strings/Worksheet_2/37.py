import random


def generate_random_binary(length):
    return "".join(random.choice(["0", "1"]) for _ in range(length))


print(generate_random_binary(8))