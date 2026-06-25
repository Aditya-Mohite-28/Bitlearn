marks = {"math": 75}
try:
    print(marks["english"])
except KeyError as e:
    print(f"KeyError: {e}")