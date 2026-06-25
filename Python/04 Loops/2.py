num = int(input("Enter a number: "))
current_sum = 0
for i in range(1, 11):
    current_sum += num
    print(f"{num} x {i} = {current_sum}")