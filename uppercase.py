str = "best"
for i in str:
    num = ord(i)
    if 97 <= num <= 122:
        num -= 32
        print("{:c}".format(num, end=' '))

print()