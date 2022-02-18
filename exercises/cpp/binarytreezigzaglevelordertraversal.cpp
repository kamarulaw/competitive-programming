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
    
    void traversal(TreeNode* root, int depth) { 
      if (root != NULL) { 
        m[depth].push_back(root->val);
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
      }
    }
  
    vector<int> reverseVec(vector<int> vec) {
      int n = vec.size(); 
      for (int i = 0; i < n/2; i++) { 
        int temp = vec[i];
        vec[i] = vec[n-1-i];
        vec[n-i-1] = temp; 
      }
      return vec; 
    }
  
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      traversal(root, 0);
      vector<vector<int>> res;
      for (auto it: m) 
        res.push_back(it.second);
      for (int i = 0; i < res.size(); i++) { 
        if (i%2 == 1)
          res[i] = reverseVec(res[i]);
      }
      return res; 
    }
};s