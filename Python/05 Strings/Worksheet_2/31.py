def snake_to_pascal(text):
    return "".join(word.capitalize() for word in text.split("_"))


input_str = "my_variable_name"
print(snake_to_pascal(input_str))