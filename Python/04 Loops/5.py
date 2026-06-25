num = int(input("Enter an integer: "))
if num == 0:
    print(0)
else:
    if num < 0:
        print("-", end="")
        num = -num
    while num > 0:
        print(num % 10, end="")
        num //= 10
    print()