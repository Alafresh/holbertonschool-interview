#!/usr/bin/python3
def canUnlockAll(boxes):

    """first Box"""
    keySet = [0]

    """looks for the key inside the first box and gets the keys"""
    for i in keySet:
        for j in boxes[i]:
            if j not in keySet and j < len(boxes):
                keySet.append(j)

    """it returns true if get all the keys otherwise false"""
    if len(keySet) == len(boxes):
        return True
    else:
        return False
