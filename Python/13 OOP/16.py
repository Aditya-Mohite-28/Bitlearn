class ListNode:
    def __init__(self, val=0):
        self.val = val
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, val):
        new_node = ListNode(val)
        if not self.head:
            self.head = new_node
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node

    def display(self):
        elements = []
        curr = self.head
        while curr:
            elements.append(str(curr.val))
            curr = curr.next
        print(" -> ".join(elements))

playlist = LinkedList()
playlist.insert(10)
playlist.insert(20)
playlist.display()