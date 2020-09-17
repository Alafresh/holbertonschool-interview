#!/usr/bin/python3
import sys

if __name__ == '__main__':
    countWords = __import__('0-count').count_words
    if len(sys.argv) < 3:
        print("Usage: {} <subreddit> <list of keywords>".format(sys.argv[0]))
        print("Ex: {} programming 'python java javascript'".format(sys.argv[0]))
    else:
        result = countWords(sys.argv[1], [x for x in sys.argv[2].split()])
