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
    map<int, int> m;
    void traversal(TreeNode* root) { 
      if (root == NULL)
        return;
      m[root->val]++; 
      traversal(root->left);
      traversal(root->right);
    }
  
    bool findTarget(TreeNode* root, int k) {
      traversal(root);
      for (auto it: m) { 
        if (m.count(k-it.first) >= 1 && k-it.first != it.first) 
          return true; 
        if (k-it.first == it.first && m.count(it.first) > 1)
          return true; 
      }
      return false; 
    }
};