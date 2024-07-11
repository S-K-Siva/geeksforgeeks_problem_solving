class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        lst = list(S.split('.'))
        lst = lst[::-1]
        return '.'.join(lst)

