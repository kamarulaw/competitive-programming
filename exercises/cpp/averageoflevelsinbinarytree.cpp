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
    
    vector<double> averageOfLevels(TreeNode* root) {
      traversal(root, 0);
      vector<double> res; 
      for (auto it: m) { 
        long long int sum = 0; 
        vector<int> vec = it.second; 
        for (int i = 0; i < vec.size(); i++) 
          sum += vec[i];
        res.push_back(sum / (vec.size()*1.0));
      }
      return res; 
    }
};