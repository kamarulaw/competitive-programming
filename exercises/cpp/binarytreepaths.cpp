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
    set<string> res;
    vector<string> arr; 
  
    void traversal(TreeNode*root, string path) {
      if (root != NULL) {         
        path += to_string(root->val); 
        path += "->";
        traversal(root->left, path);
        traversal(root->right, path); 
        if (root->left == NULL && root->right == NULL) 
          res.insert(path); 
      }
    }
  
    vector<string> binaryTreePaths(TreeNode* root) {
      traversal(root, "");
      for (auto elem: res) {
        elem.pop_back(); 
        elem.pop_back();
        arr.push_back(elem); 
      }
      return arr; 
    }
};