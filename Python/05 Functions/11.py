def string_stats(s):
    vowels = "aeiouAEIOU"
    v_count = 0
    c_count = 0
    d_count = 0
    
    for char in s:
        if char.isdigit():
            d_count += 1
        elif char.isalpha():
            if char in vowels:
                v_count += 1
            else:
                c_count += 1
                
    return (v_count, c_count, d_count)

print(string_stats("Hello123"))