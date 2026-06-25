def are_rotations(str1, str2):
    if len(str1) != len(str2):
        return "Rotationally equivalent: No"
    if str2 in (str1 + str1):
        return "Rotationally equivalent: Yes"
    return "Rotationally equivalent: No"


print(are_rotations("abcde", "cdeab"))