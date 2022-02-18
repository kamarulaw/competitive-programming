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
    map<int, vector<int>> m; 
    vector<vector<int>> res; 
    
    void traversal(TreeNode* root, int depth) { 
      if (root != NULL) { 
        m[depth].push_back(root->val);
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
      }
    }
  
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      traversal(root, 0);
      for (auto it: m) 
        res.push_back(it.second);
      int n = res.size(); 
      for (int i = 0; i < n/2; i++) { 
        vector<int> temp = res[i];
        res[i] = res[n-i-1];
        res[n-i-1] = temp; 
      }
      return res; 
    }
};