students = ['A', 'B']
subjects = ['math', 'sci']
scores = [[90, 80], [85, 95]]

matrix = {students[i]: {subjects[j]: scores[i][j] for j in range(len(subjects))} for i in range(len(students))}
print(matrix)