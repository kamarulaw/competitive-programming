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
    vector<vector<int>> leaves; 
    
    static bool comp(vector<int> a, vector<int> b) { 
      return a[1] > b[1];
    }
  
    void deepestHelper(TreeNode* root, int level) {
      if (root != NULL) { 
        if (root->left == NULL && root->right == NULL) { 
          vector<int> temp = {root->val, level};
          leaves.push_back(temp);
        } else if (root->left == NULL) {
          deepestHelper(root->right, level+1);
        } else if (root->right == NULL) { 
          deepestHelper(root->left, level+1);
        } else { 
          deepestHelper(root->left, level+1);
          deepestHelper(root->right, level+1);
        }
      }
    }
  
    int deepestLeavesSum(TreeNode* root) {
      int sum = 0; 
      deepestHelper(root, 0);
      sort(leaves.begin(), leaves.end(), comp); 
      int maxlevel = leaves[0][1];
      for (int i = 0; i < leaves.size(); i++) { 
        if (leaves[i][1] == maxlevel) { 
          sum += leaves[i][0];
        } else { 
          break; 
        }
      }
      return sum; 
    }
  
};