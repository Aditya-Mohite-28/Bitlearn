d = {'math': {'john': 90, 'jane': 80}, 'science': {'john': 85, 'jane': 95}}

inverted = {}
for subject, students in d.items():
    for student, score in students.items():
        if student not in inverted:
            inverted[student] = {}
        inverted[student][subject] = score

print(inverted)