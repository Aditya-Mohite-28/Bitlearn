num = int(input("Enter a number: "))
count = 0
if num == 0:
    count = 1
else:
    if num < 0:
        num = -num
    while num > 0:
        count += 1
        num //= 10
print("Digit count:", count)