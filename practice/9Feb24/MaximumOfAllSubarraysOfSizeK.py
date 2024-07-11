from collections import deque
class Solution:
    
    #Function to find maximum of each subarray of size k.
    def max_of_subarrays(self,arr,n,k):
        
        dq = deque()
        result = []
        for i in range(k):
            if i < n:
               
                while dq and arr[dq[-1]] <= arr[i]:
                    dq.pop()
                dq.append(i)
        
        
        for i in range(k,n):
            result.append(arr[dq[0]])
            while dq and dq[0] <= i-k:
                dq.popleft()
                
            while dq and arr[dq[-1]] <= arr[i]:
                dq.pop()
            
        
            dq.append(i)
        result.append(arr[dq[0]])
        return result
     