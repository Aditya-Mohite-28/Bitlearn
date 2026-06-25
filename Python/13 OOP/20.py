class BankAccount:
    def __init__(self, initial_balance=0):
        self.balance = initial_balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
        return self.balance

    def get_balance(self):
        return self.balance

account = BankAccount(1000)
account.deposit(500)
account.withdraw(300)
print(account.get_balance())