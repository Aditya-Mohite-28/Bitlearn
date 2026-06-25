reg = int(input(), 0)
if reg & 0x80:
    print("MSB set")
else:
    print("MSB not set")