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
    vector<int> r1; 
    vector<int> r2;
  
    void traversal(TreeNode* root, int tnum) { 
      if (root != NULL) { 
        if (root->left == NULL && root->right == NULL) { 
          if (tnum == 1) 
            r1.push_back(root->val);
          if (tnum == 2)
            r2.push_back(root->val);
        }
        traversal(root->left, tnum);
        traversal(root->right, tnum);
      }
    }
  
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      traversal(root1, 1);
      traversal(root2, 2);
      if (r1.size() != r2.size())
        return false; 
      for (int i = 0; i < r1.size(); i++) 
        if (r1[i] != r2[i])
          return false;
      return true; 
    }
};