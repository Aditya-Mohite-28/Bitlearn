num1 = 5
num2 = 6

bin1 = bin(num1)[2:]
bin2 = bin(num2)[2:]

is_anagram = sorted(bin1) == sorted(bin2)
print(is_anagram)