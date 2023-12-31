#!/usr/bin/python3
"""
Module that factorizes numbers into
two smaller numbers
"""
from sys import argv


def factor(n):
    i = 2

    if n < 2:
        return
    while n % i:
        i += 1
    print("{:.0f}={:.0f}*{:.0f}".format(n, n / i, i))

    if len(argv) != 2:
        exit()


try:
    with open(argv[1]) as file:
        line = file.readline()

        while line != "":
            n = int(line.split('\n')[0])
            factor(n)
            line = file.readline()
except FileNotFoundError:
    pass
