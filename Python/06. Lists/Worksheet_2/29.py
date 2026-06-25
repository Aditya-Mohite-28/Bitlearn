def lcs(l1, l2):
    m, n = len(l1), len(l2)
    dp = [[0] * (n + 1) for _ in range(m + 1)]
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if l1[i - 1] == l2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    
    seq = []
    i, j = m, n
    while i > 0 and j > 0:
        if l1[i - 1] == l2[j - 1]:
            seq.append(l1[i - 1])
            i -= 1
            j -= 1
        elif dp[i - 1][j] >= dp[i][j - 1]:
            i -= 1
        else:
            j -= 1
    return seq[::-1]

list1 = [1, 3, 4, 1, 2, 3, 4, 1]
list2 = [3, 4, 1, 2, 1, 3]
result = lcs(list1, list2)
print(f"Input: {list1}, {list2}")
print(f"Output: {result}")