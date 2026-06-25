fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

fruits_with_a = [fruit for fruit in fruits if "a" in fruit]
print(fruits_with_a)

uppercase_fruits = [fruit.upper() for fruit in fruits]
print(uppercase_fruits)

replaced_fruits = [
    "orange" if fruit == "banana" else fruit for fruit in fruits
]
print(replaced_fruits)