def check_palindrome_symmetrical(s):
    is_palindrome = "Yes" if s == s[::-1] else "No"
    
    mid = len(s) // 2
    if len(s) % 2 == 0:
        is_symmetrical = "Yes" if s[:mid] == s[mid:] else "No"
    else:
        is_symmetrical = "Yes" if s[:mid] == s[mid+1:] else "No"
        
    print(f"Palindrome: {is_palindrome}")
    print(f"Symmetrical: {is_symmetrical}")

check_palindrome_symmetrical("aataa")