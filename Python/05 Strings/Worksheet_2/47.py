def remove_redundant_patterns(words):
    result = []
    for word in words:
        n = len(word)
        found_pattern = False
        for i in range(1, n // 2 + 1):
            if n % i == 0:
                pattern = word[:i]
                if pattern * (n // i) == word:
                    result.append(pattern)
                    found_pattern = True
                    break
        if not found_pattern:
            result.append(word)
    return result


print(remove_redundant_patterns(["hellohello", "world", "testtesttest"]))