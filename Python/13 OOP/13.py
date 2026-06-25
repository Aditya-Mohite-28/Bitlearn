class Shape:
    def area(self): pass
    def perimeter(self): pass

class Triangle(Shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height
    def area(self):
        return 0.5 * self.base * self.height

tri = Triangle(6, 4)
print(tri.area())