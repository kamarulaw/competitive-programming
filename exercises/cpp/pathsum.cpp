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
    vector<vector<int>> res; 
    
    void traversal(TreeNode* root, int targetSum, vector<int> path) { 
      if (root != NULL) { 
        path.push_back(root->val);
        traversal(root->left, targetSum, path);
        traversal(root->right, targetSum, path);
        if (root->left == NULL && root->right == NULL) { 
          int sum = 0; 
          for (int i = 0; i < path.size(); i++) 
            sum += path[i];
          if (sum == targetSum)
            res.push_back(path);
        }
      }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
      vector<int> path;
      traversal(root, targetSum, path);
      return res.size() >= 1; 
    }
};