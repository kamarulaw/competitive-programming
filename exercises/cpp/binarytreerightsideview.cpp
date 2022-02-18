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
  
    vector<int> rightSideView(TreeNode* root) {
      traversal(root, 0);
      for (auto it: m) 
        res.push_back(it.second);
      vector<int> ans;
      for (int i = 0; i < res.size(); i++) 
        ans.push_back(res[i][res[i].size()-1]);
      return ans; 
    }
};