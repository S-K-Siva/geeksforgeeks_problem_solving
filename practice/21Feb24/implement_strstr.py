import re
def strstr(s,x):
    length = len(x)
    for i in range(len(s)-length + 1):
    
        if s[i:i+length] == x:
            return i
    return -1