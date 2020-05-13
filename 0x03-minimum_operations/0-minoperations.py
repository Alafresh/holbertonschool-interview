#!/usr/bin/python3
"""Method that calculates the fewest number of operations"""

def minOperations(n):

    """That means n cannot be operated"""
    if n < 2:
        return 0

    i = 2
    h = 0
    while i <= n:
        if n % i == 0:
            n /= i
            h += i
        else:
            i += 1
    return h
