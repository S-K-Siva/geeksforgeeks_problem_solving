class Solution:
    def compareFrac (self, str):
        
        s = str.split(', ')
        first = s[0].split('/')
        second = s[1].split('/')
        first_1 = int(first[0])
        first_2 = int(first[1])
        second_1 = int(second[0])
        second_2 = int(second[1])
        c1 = first_1/first_2
        c2 = second_1/second_2
        if c1 == c2:
            return "equal"
        elif c1 > c2:
            return s[0]
        return s[1]
        
