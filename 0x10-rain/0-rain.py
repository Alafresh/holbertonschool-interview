#!/usr/bin/python3
"""
Rain
"""


def rain(walls):
    num = len(walls)
    if (num <= 0):
        return (0)
    retained = 0

    for i in range(1, num - 1):
        case1 = walls[i]
        for j in range(i):
            case1 = max(case1, walls[j])
        case2 = walls[i]
        for j in range(i + 1, num):
            case2 = max(case2, walls[j])
        y = min(case1, case2)
        retained += y - walls[i]
    return (retained)
