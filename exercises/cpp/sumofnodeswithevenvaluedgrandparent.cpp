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
    vector<TreeNode*> usefulchildren; 
  
    void traversal(TreeNode* root) { 
      if (root != NULL) { 
        if (root->val % 2 == 0) {
          if (root->left != NULL) 
            usefulchildren.push_back(root->left);
          if (root->right != NULL) 
            usefulchildren.push_back(root->right);
        }
        traversal(root->left);
        traversal(root->right);
      }
    }
  
    int sumEvenGrandparent(TreeNode* root) {
      int res = 0; 
      traversal(root);
      for (int i = 0; i < usefulchildren.size(); i++) { 
        TreeNode* node = usefulchildren[i];
        if (node->left != NULL)
          res += node->left->val; 
        if (node->right != NULL) 
          res += node->right->val; 
      }
      return res; 
    }
};