class Solution:
    #Function to return the position of the first repeating element.
    def firstRepeated(self,arr, n):
        d = dict()
        for ind in range(len(arr)):
            try:
                if d[arr[ind]]:
                    d[arr[ind]][0] += 1
            except:
                d[arr[ind]] = [1,ind]
        for ind in range(len(arr)):
            if d[arr[ind]][0] > 1:
                return d[arr[ind]][1] + 1
        return -1
