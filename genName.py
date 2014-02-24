#!/usr/bin/python
# coding:utf-8
# usage: ./genName.py "String to Integer (atoi)"
#        ./genName.py "String to Integer \(atoi\)"
import sys

def convertName(longName):
    retName = ""
    for ch in longName:
        if ch in (' ', '(', ')'):
            retName += ('_')
        else :
            retName +=ch
    return retName

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print "error! please input the name to convert!"
        sys.exit(1)
    else:
        name = convertName(" ".join(sys.argv[1:]))
        print name
