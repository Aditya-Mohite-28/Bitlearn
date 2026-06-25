val = int(input())
if 0 <= val <= 63:
    print("Quadrant 1")
elif 64 <= val <= 127:
    print("Quadrant 2")
elif 128 <= val <= 191:
    print("Quadrant 3")
elif 192 <= val <= 255:
    print("Quadrant 4")