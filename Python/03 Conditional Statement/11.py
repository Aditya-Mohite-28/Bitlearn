val = int(input(), 0)
ones = bin(val).count('1')
if ones % 2 == 0:
    print("Parity: Even")
else:
    print("Parity: Odd")