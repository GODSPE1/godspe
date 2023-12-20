#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
tempNum = number


last_digit = (abs(number) % 10) 

if number < 0:
    number = tempNum
    last_digit = -(last_digit)
    

if last_digit== 5:
    string1, string2 = "Last digit of", " and is greater than 5"
elif last_digit == 0:
    string1, string2 = "Last digit of", "and is 0"
elif 0 < last_digit < 6:
    string1, string2 = "Last digit of", "and is less than 6 and not 0"
    
print("{} {} is {}".format(string1, tempNum, string2))