from datetime import date

class Person:
    def __init__(self, name, birth_date):
        self.name = name
        self.birth_date = date.fromisoformat(birth_date)

    def calculate_age(self, current_date_str):
        current_date = date.fromisoformat(current_date_str)
        age = current_date.year - self.birth_date.year
        if (current_date.month, current_date.day) < (self.birth_date.month, self.birth_date.day):
            age -= 1
        return age

person = Person("Alice", "2000-05-25")
age = person.calculate_age("2025-05-25")
print(f"{person.name} is {age} years old.")