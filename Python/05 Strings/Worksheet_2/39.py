import re


def validate_password(password):
    if len(password) >= 8 and re.search("[A-Z]", password) and re.search("[0-9]", password) and re.search("[_@$!%*?&]", password):
        return "Valid password: Yes"
    return "Valid password: No"


print(validate_password("MyPass123@"))