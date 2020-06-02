#!/usr/bin/python3
""" reads stdin line by line and computes metrics """
import sys

try:
    count = 0
    size = 0
    statusErrors = {"200": 0, "301": 0, "400": 0, "401": 0,
                    "403": 0, "404": 0, "405": 0, "500": 0}

    for line in sys.stdin:
        count += 1
        data = line.split()
        num = data[-2]
        if num in statusErrors:
            statusErrors[num] += 1
        size += int(data[-1])
        if count % 10 == 0:
            print("File size: {}".format(size))
            for i, j in sorted(statusErrors.items()):
                print("{}: {}".format(i, j))
except KeyboardInterrupt:
    print("File size: {}".format(size))
    for i, j in sorted(statusErrors.items()):
        print("{}: {}".format(i, j))
