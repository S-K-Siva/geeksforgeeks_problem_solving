class Solution:
    def decimalValue(self, head):
        MOD=10**9+7
        # Code here
        length = 0
        temp = head
        while temp:
            length += 1
            temp = temp.next
        result = 0
        length -= 1
        while head:
            if head.data:
                result += pow(2,length)
                result %= MOD
            length -= 1
            head = head.next
        
        return result