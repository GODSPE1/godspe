def safe_print_integer(value):
    try:
        print("{:d}".format(value))
        count +=1
        return True
    except:
        return False