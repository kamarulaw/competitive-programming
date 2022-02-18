# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self, root, val): 
      if (root == None):
        return val
      if (root.val > val): 
        if (root.left == None):
          root.left = TreeNode(val)
        else: 
          self.helper(root.left, val)
      elif (root.val < val): 
        if (root.right == None):
          root.right = TreeNode(val)
        else: 
          self.helper(root.right, val)
      
    def insertIntoBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        if (root == None): 
          return TreeNode(val)
        self.helper(root, val)
        return root
            
          
        