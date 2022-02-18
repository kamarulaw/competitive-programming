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
    vector<vector<int>> vec; 
    void traversal(TreeNode* root, int depth) { 
      if (root != NULL) { 
        m[depth].push_back(root->val);
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
      }
    }
  
    bool isInc(vector<int> v) { 
      for (int i = 0; i < v.size()-1; i++) { 
        if (v[i+1] <= v[i])
          return false; 
      }
      return true; 
    }
  
    bool isDec(vector<int> v) { 
      for (int i = 0; i < v.size()-1; i++) { 
        if (v[i+1] >= v[i])
          return false; 
      }
      return true; 
    }
  
    bool allOdd(vector<int> v) { 
      for (int i = 0; i < v.size(); i++) 
        if (v[i] % 2 == 0)
          return false; 
      return true; 
    }
  
    bool allEven(vector<int> v) { 
      for (int i = 0; i < v.size(); i++) { 
        if (v[i] % 2 == 1)
          return false; 
      }
      return true; 
    }
    
    bool isEvenOddTree(TreeNode* root) {
      traversal(root, 0);
      for (auto it: m)
        vec.push_back(it.second);
      for (int i = 0; i < vec.size(); i++) { 
        vector<int> v = vec[i]; 
        if (i % 2 == 0)
          if (!(allOdd(v) && isInc(v)))
            return false; 
        if (i % 2 == 1)
          if (!(allEven(v) && isDec(v)))
            return false; 
      }
      return true; 
    }
};