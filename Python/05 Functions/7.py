def sign(num):
    if num > 0:
        return 'Positive'
    elif num < 0:
        return 'Negative'
    else:
        return 'Zero'

print(sign(10))
print(sign(-4))
print(sign(0))