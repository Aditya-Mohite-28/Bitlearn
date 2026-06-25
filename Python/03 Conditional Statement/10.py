s1, s2, s3 = map(float, input().split(','))
high_count = (s1 > 50) + (s2 > 50) + (s3 > 50)
if high_count >= 2:
    print("Majority High")
else:
    print("Majority Low")