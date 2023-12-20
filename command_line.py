import sys

script_name = sys.argv[0]
print("Script Name: {}".format(script_name))

if len(sys.argv) > 1:
    for i, arg in enumerate(sys.argv[1:], start=1):
        print(f"Argument {i}: {arg}")
 