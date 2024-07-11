

# Node Class:
class Node:
    def _init_(self,val):
        self.data = val
        self.left = None
        self.right = None

#Function to return a list containing the preorder traversal of the tree.
def helper(root,lst):
    if not root:
        return 
    lst.append(root.data)
    helper(root.left,lst)
    helper(root.right,lst)
def preorder(root):
    lst = []
    helper(root,lst)
    return lst
    
   