/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int mindepth = INT_MAX;

    void traversal(TreeNode* root, int depth)
    {
        if (root == NULL)
        {
            return;
        }

        if (root->left == NULL && root->right == NULL)
        {
            mindepth = min(mindepth, depth+1);
        }
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
    }

    int minDepth(TreeNode* root) 
    {
        if (root == NULL)
        {
            return 0;
        }
        
        traversal(root,0); 
        return mindepth;
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
