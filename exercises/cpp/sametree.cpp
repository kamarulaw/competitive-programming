/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool traversal(TreeNode* p_, TreeNode* q_)
    {
        if (p_ == NULL && q_ != NULL)
        {
            return false;
        }
        if (q_ == NULL && p_ != NULL)
        {
            return false;
        }
        if (p_ == NULL && q_ == NULL)
        {
            return true;
        }
        return p_->val == q_->val && traversal(p_->left,q_->left) && traversal(p_->right,q_->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        return traversal(p,q);    
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
