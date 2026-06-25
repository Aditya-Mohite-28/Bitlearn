class EnhancedStack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def display(self):
        print(self.items)

estack = EnhancedStack()
estack.push(1)
estack.push(2)
estack.display()