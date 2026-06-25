a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
while b != 0:
    remainder = a % b
    a = b
    b = remainder
print("GCD:", a)