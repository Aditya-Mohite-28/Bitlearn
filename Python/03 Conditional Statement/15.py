r1, r2 = map(float, input().split(','))
if abs(r1 - r2) <= 5:
    print("Match")
else:
    print("No Match")