class Note:
    def __init__(self, title, content):
        self.title = title
        self.content = content

note1 = Note("Meeting Notes", "Discuss project status with team.")
note2 = Note("Grocery List", "Eggs, Milk, Bread")

print(f"{note1.title} : {note1.content}")
print(f"{note2.title} : {note2.content}")
