freq = float(input())
if freq < 1000:
    print("Low Band")
elif 1000 <= freq <= 9999:
    print("Mid Band")
elif 10000 <= freq <= 99999:
    print("High Band")
else:
    print("Out of Range")