try:
    print(5 + "Hello")
except TypeError as e:
    print(f"Error: {e}")
    print("Explanation: Python cannot implicitly add an 'int' and 'str' because it is a strongly typed language.")