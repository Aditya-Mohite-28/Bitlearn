a = 20
b = 12
c = 18
result = (a + b + c) - (a if (a >= b and a >= c) else (b if b >= c else c)) - (a if (a <= b and a <= c) else (b if b <= c else c))
print(result)