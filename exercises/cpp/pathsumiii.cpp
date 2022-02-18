/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:  
    int pathSum(TreeNode* root, int targetSum) {
      if (root == NULL) 
        return 0; 
      return pathHelper(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }
  
    int pathHelper(TreeNode* root, int sum) { 
      int res = 0;
      
      if (root == NULL) 
        return res; 
      
      if (root->val == sum)
        res = 1; 
      return res + pathHelper(root->left, sum - root->val) + pathHelper(root->right, sum - root->val);
      
    }
};