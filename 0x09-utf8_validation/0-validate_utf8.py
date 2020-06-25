#!/usr/bin/python3
""" Utf-8 vaidation """


def validUTF8(data):
    list_chr = []
    u = ""
    try:
        bytes(data).decode('utf8')
        return True
    except UnicodeDecodeError:
        return False
    except ValueError:
        return False
