s = "abcde"
temp = s + s
n = len(s)

for i in range(1, n + 1):
    if temp[i:i+n] == s:
        print(i)
        break