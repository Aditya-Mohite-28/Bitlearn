code = int(input())
if code >= 1000:
    print("Critical")
elif 100 <= code <= 999:
    print("Warning")
else:
    print("Info")