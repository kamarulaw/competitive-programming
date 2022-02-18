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
    map <int, vector<long long int>> m;
    static bool comp1(vector<long long int> a, vector<long long int> b) { 
      if (a[1] < b[1]) { 
        return true;
      } else if (a[1] > b[1]) { 
        return false; 
      } else { 
        if (a[0] < b[0]) { 
        } else if (a[0] > b[0]) { 
          return false;
        } 
      }
      return false; 
    }
  
    void traversal(TreeNode* root, int depth) { 
      if (root != NULL) { 
        m[depth].push_back(root->val);
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
      }
    }
  
    int maxLevelSum(TreeNode* root) {
      traversal(root, 1);
      vector<vector<long long int>> sums; 
      for (auto it: m) { 
        long long int sum = 0; 
        vector<long long int> arr = it.second; 
        for (int i = 0; i < it.second.size(); i++) 
          sum += it.second[i];
        vector<long long int> vec = {it.first, sum};
        sums.push_back(vec);
      }
      sort(sums.begin(), sums.end(), comp1);
      return sums[sums.size()-1][0];
    }
};