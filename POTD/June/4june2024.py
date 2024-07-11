#User function Template for python3
class Solution:
	def binaryNextNumber(self, s):
# 		number = 0
		
# 		s = s[::-1]
# 		for i in range(len(s)):
# 		    if s[i] == '1':
# 		        number += pow(2,i)
		
# 		number += 1
# 		result = ""
		
# 		while number != 0:
# 		    rem = number%2
# 		    if rem:
# 		        result += '1'
# 		    else:
# 		        result += '0'
# 		    number //=2
# 		return result[::-1]

        
        # Optimised
        number = int(s,2)
        return bin(number+1)[2:]
