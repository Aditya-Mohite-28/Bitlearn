num = int(input("Enter a number: "))
divisor = 2
while divisor <= num:
    if num % divisor == 0:
        print("Smallest divisor:", divisor)
        break
    divisor += 1