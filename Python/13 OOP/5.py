class Student:
    school_name = "Central High School"

    def __init__(self, name):
        self.name = name

student1 = Student("Aditya")
student2 = Student("Rakesh")

print(f"{student1.name}\t {student1.school_name}")
print(f"{student2.name}\t {student2.school_name}")