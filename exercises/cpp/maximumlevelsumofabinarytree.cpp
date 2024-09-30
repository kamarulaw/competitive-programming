/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 39 of 41 */ 
/* 8/30/21 */
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

/* SOLUTION 2 */ 
/* All tests passed */ 
/* 9/30/24 [SOLUTION 1] Edit: Changed comparator logic within else clause*/
class Solution {
public:
    map <int, vector<long long int>> m;
    static bool comp1(vector<long long int> a, vector<long long int> b) { 
      if (a[1] < b[1]) 
      { 
        return true;
      } 
      else if (a[1] > b[1]) 
      { 
        return false; 
      } 
      else 
      { 
        if (a[0] < b[0]) 
        { 
            return false;
        } 
        else if (a[0] > b[0]) 
        { 
          return true;
        } 
        else
        {
            return false; 
        }
      }
    }
  
    void traversal(TreeNode* root, int depth) { 
      if (root != NULL) 
      { 
        m[depth].push_back(root->val);
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
      }
    }
  
    int maxLevelSum(TreeNode* root) {
      traversal(root, 1);
      vector<vector<long long int>> sums; 
      for (auto it: m) 
      { 
        long long int sum = 0; 
        vector<long long int> arr = it.second; 
        for (int i = 0; i < it.second.size(); i++) 
        {
          cout << it.second[i] << " "; // debug print line
          sum += it.second[i];
        }
        cout << " <> " << sum << endl; // debug print line
        vector<long long int> vec = {it.first, sum};
        sums.push_back(vec);
        sum = 0; 
      }

      sort(sums.begin(), sums.end(), comp1);
      return sums[sums.size()-1][0];
    }
};

/* SOLUTION 3 */ 
/* psf */
/* 9/29/24 */
class Solution {
public:
    vector<int> levelsums;
    
    int treeheight(TreeNode* root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return 1 + max(treeheight(root->left),treeheight(root->right));
    }
    
    int maxLevelSum(TreeNode* root) 
    {
        long long maximumsum = LLONG_MIN;
        long long maximumsumlevel = -1;
        int numsums = treeheight(root);
        return 0;
    }
};
