#!/usr/bin/python3

def remove_char_at(str, n):
    v = ""
    for j in range(len(str)):
        if j != n:
            v = v + str[j]
    return (v)
