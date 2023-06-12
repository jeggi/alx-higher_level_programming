#!/usr/bin/python3

def new_in_list(my_list, idx, element):
    c = my_list[:]
    if idx < 0 or idx > (len(c)-1):
        return c
    else:
        c[idx] = element
        return c
