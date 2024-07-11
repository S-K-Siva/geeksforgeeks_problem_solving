
class Solution:
    
    
    def maxSum(self, n): 
        
        
        dp = [-1 for _ in range(n+1)]
        
        
        def solve(number):
            # if number%2 == 1:
            #     number += 1
            if number//2 == 0 or number//3 == 0 or number//4 == 0:
                return 0
            # print(number)
            if dp[number] != -1:
                return dp[number]
            dp[number] = max(number//2,solve(number//2)) + max(number//3,solve(number//3)) + max(number//4,solve(number//4))
            return dp[number] 
        
        
        solve(n)
        if dp[-1] < n:
            return n
        return dp[-1]