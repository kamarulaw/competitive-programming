/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> r1; 
    vector<int> r2;
  
    void traversal(TreeNode* root, int tnum) { 
      if (root != NULL) { 
        if (root->left == NULL && root->right == NULL) { 
          if (tnum == 1) 
            r1.push_back(root->val);
          if (tnum == 2)
            r2.push_back(root->val);
        }
        traversal(root->left, tnum);
        traversal(root->right, tnum);
      }
    }
  
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      traversal(root1, 1);
      traversal(root2, 2);
      if (r1.size() != r2.size())
        return false; 
      for (int i = 0; i < r1.size(); i++) 
        if (r1[i] != r2[i])
          return false;
      return true; 
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> lvs1; 
    vector<int> lvs2;

    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        findlvs(root1,1); 
        findlvs(root2,2);

        if (lvs1.size() != lvs2.size())
        {
            return false;
        }

        for (int i = 0; i < lvs1.size(); i++)
        {
            if (lvs1[i] != lvs2[i])
            {
                return false;
            }
        }
        return true;
    }

    void findlvs(TreeNode* root, int seqnum)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            if (seqnum == 1)
            {
                lvs1.push_back(root->val);
            }
            else
            {
                lvs2.push_back(root->val);
            }
        }
        findlvs(root->left,seqnum); 
        findlvs(root->right,seqnum);
    }
};

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
