d = {'x': 100, 'y': 200}
value = 200

found_key = next((k for k, v in d.items() if v == value), None)
print(f"Key for value {value}: '{found_key}'")