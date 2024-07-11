class Solution:
    def DivisibleByEight(self,s):
            
            if len(s)<3:
                if int(s) % 8 == 0:
                    return 1
                else:
                    return -1
                    
            elif len(s) > 1:
                s = s[-3]+s[-2]+s[-1]
                p = s
                
                last_two_digit = int(p)
                number = last_two_digit
                if number%8 == 0:
                    return 1
                else:
                    return -1
                
