class Stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        return self.items.pop() if self.items else None

undo_stack = Stack()
undo_stack.push(10)
undo_stack.push(20)
print(undo_stack.pop())