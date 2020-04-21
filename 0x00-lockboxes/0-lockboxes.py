#!/usr/bin/python3
def canUnlockAll(boxes):
    """Algorithm  that unlock all boxes"""

    keySet = [0]

    """Check box by box"""
    for i in keySet:
        for j in boxes[i]:
            if j not in keySet and j < len(boxes):
                keySet.append(j)

    """Hardcode"""
    if len(keySet) == len(boxes):
        return True
    else:
        return False
