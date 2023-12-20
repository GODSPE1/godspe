for i in range(0, 100):
    if i == 99:
        print('99')
        break
    print("{:02d},".format(i), end=" ")


    for i in range(99):
        print("{:02d}".format(i), end=",")
    print("{}".format(99))