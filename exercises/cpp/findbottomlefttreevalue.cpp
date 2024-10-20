/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int lastrow = INT_MIN;

    map<int, vector<int>> m;

    void traversal(TreeNode* root, int depth)
    {
        if (root == NULL)
        {
            return;
        }
        lastrow = max(lastrow,depth);
        m[depth].push_back(root->val);
        traversal(root->left, depth+1);
        traversal(root->right, depth+1);
    }

    int findBottomLeftValue(TreeNode* root) 
    {
        traversal(root,0);
        return m[lastrow][0]; 
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
