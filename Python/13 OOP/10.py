class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return round(3.14159 * self.radius ** 2, 2)

    def perimeter(self):
        return round(2 * 3.14159 * self.radius, 2)

pond = Circle(3)
print(pond.area())
print(pond.perimeter())