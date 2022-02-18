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
  
    int md = -1; 
  
    void maxdepthhelper(TreeNode* root, int depth) { 
      if (root != NULL) {
        md = max(depth, md);
        maxdepthhelper(root->left, depth+1);; 
        maxdepthhelper(root->right, depth+1);
      }
    }
  
    int maxDepth(TreeNode* root) {
      if (root == NULL) 
        return 0; 
      maxdepthhelper(root, 1);
      return md; 
    }
};