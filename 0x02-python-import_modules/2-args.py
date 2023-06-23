#!/usr/bin/python3

import sys

args = sys.argv[1:]  # Exclude the script name from the arguments

num_args = len(args)
if num_args == 0:
    print("0 argument.")
    print(".")
else:
    print(f"{num_args} argument{'s' if num_args > 1 else ''}:")
    for i, arg in enumerate(args, start=1):
        print(f"{i}: {arg}")

