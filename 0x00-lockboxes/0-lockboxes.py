#!/usr/bin/python3
def canUnlockAll(boxes):
"""Algorithm  that unlock all boxes"""

    keySet = []

"""Check box by box"""
    for i in range(len(boxes)):
        for j in boxes[i]:
            if j >= len(boxes):
                return False
            keySet.append(j)

"""Hardcode"""
    if len(set(keySet)) == len(boxes):
        return True
    else:
        return False
