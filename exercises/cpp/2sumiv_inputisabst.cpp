/* SOLUTION 1 */
/* ALl tests passed */
class Solution {
public:
    map<int,int> m;
    void traversal(TreeNode* root)
    {
        if (root == NULL)
        {
            return;
        }
        m[root->val]++;
        traversal(root->left);
        traversal(root->right);
    }

    bool findTarget(TreeNode* root, int k) 
    {
        traversal(root);
        for (auto it: m)
        {
            if ((it.first != k-it.first && m[k-it.first] >= 1 && m[it.first] >=1) || (it.first == k-it.first && it.second > 1)) // seems odd you have to check m[it.first] 
            {
                return true;
            }
        }    
        return false;
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
