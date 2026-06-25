def grade(score):
    if score >= 90:
        return 'A'
        return 'B'
    elif 70 <= score < 80:
        return 'C'
    else:
        return 'F'

print(grade(85))
print(grade(72))
print(grade(50))