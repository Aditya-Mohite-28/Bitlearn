a = 8
b = 27
c = 14
largest = a if (a >= b and a >= c) else (b if b >= c else c)
smallest = a if (a <= b and a <= c) else (b if b <= c else c)
result = largest - smallest
print(result)