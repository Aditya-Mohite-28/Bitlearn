s = "python"
mid = len(s) // 2

if len(s) % 2 == 0:
    print(f"Middle character: '{s[mid-1]}' and '{s[mid]}'")
else:
    print(f"Middle character: '{s[mid]}'")