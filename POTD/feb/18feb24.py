class Solution:
    def sumOfLeafNodes(self, root):
        if not root:
            return 0
        if root.left == None and root.right == None:
            return root.data
        return self.sumOfLeafNodes(root.left) + self.sumOfLeafNodes(root.right)
       