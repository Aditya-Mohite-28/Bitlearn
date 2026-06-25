import re

s = "Hello@123"
has_special = "Yes" if re.search(r'[^a-zA-Z0-9]', s) else "No"
print(f"Contains special character: {has_special}")