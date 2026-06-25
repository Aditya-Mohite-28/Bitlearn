class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None

    def insert(self, val):
        if not self.root:
            self.root = Node(val)
        else:
            self._insert(self.root, val)

    def _insert(self, node, val):
        if val < node.val:
            if not node.left: node.left = Node(val)
            else: self._insert(node.left, val)
        else:
            if not node.right: node.right = Node(val)
            else: self._insert(node.right, val)

    def search(self, val):
        return self._search(self.root, val)

    def _search(self, node, val):
        if not node: return False
        if node.val == val: return True
        return self._search(node.left, val) if val < node.val else self._search(node.right, val)

tree = BST()
for x in [4, 2, 5, 1, 3]: tree.insert(x)
print(tree.search(5))