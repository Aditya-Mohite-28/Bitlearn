class ShoppingCart:
    def __init__(self):
        self.items = {}

    def add_item(self, name, price, quantity):
        if name in self.items:
            self.items[name]['quantity'] += quantity
        else:
            self.items[name] = {'price': price, 'quantity': quantity}

    def total(self):
        return sum(info['price'] * info['quantity'] for info in self.items.values())

cart = ShoppingCart()
cart.add_item("Book", 200, 2)
cart.add_item("Pen", 20, 5)
print(cart.total())