
'''
# Node Class:
class Node:
    def init(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

class Solution:
    #Function to check whether all nodes of a tree have the value 
    #equal to the sum of their child nodes.
    def isSumProperty(self, root):
        if not root: return 1
        elif root and root.left == None and root.right == None: return 1
        # if root.left and root.right:
        #     print(root.left.data,root.right.data)
        # elif root.left:
        #     print("L:",root.left.data)
        # elif root.right:
        #     print("R:",root.right.data)
        if root and root.left and root.right and root.data != root.left.data + root.right.data:
            return 0
        
        elif root.left == None or root.right == None:
            if root.left:
               
                if root.left.data != root.data:
                    return 0
            if root.right:
                
                if root.right.data != root.data:
                    return 0
        
        
        if self.isSumProperty(root.left) == 0:
            return 0
        if self.isSumProperty(root.right) == 0:
            return 0
        return 1

