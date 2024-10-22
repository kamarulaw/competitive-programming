/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int sum = 0;

    void traversal(TreeNode* root, char camefrom)
    {
        if (root == NULL)
        {
            return;
        } 

        if (root->left == NULL && root->right == NULL && camefrom == 'L')
        {
            sum += root->val;
            return;
        }
        traversal(root->left, 'L');
        traversal(root->right, 'R');
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        traversal(root,' ');
        return sum;
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
