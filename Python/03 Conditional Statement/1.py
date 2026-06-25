voltage = float(input())
if 3.0 <= voltage <= 3.3:
    print("Nominal")
elif voltage < 3.0:
    print("Under Voltage")
else:
    print("Over Voltage")