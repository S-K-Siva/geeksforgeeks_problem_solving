class Solution:
    
    #Function to count nodes of a linked list.
    def getCount(self, head_node):
        length = 0
        
        while head_node:
            length+=1
            head_node = head_node.next
        return length