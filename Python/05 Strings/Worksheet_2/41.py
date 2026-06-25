4def to_superscript(text):
    sup_map = str.maketrans("0123456789", "⁰¹²³⁴⁵⁶⁷⁸⁹")
    return text.translate(sup_map)


base_text = "E = mc"
exponent = "2"
print(f"{base_text}{to_superscript(exponent)}")