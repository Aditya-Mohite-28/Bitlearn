class Calculator:
    def add(self, x, y):
        return x + y
    def divide(self, x, y):
        return x / y if y != 0 else "Cannot divide by zero"

calc = Calculator()
print(calc.add(4, 5))
print(calc.divide(10, 2))