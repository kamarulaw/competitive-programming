/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 49 of 63 */
class Solution {
public:
    int goodnodes = 0; 
    int goodNodes(TreeNode* root) 
    {
        dfs(root, -1);    
        return goodnodes;
    }

    void dfs(TreeNode* tn, int greatestvalue)
    {
        if (tn == NULL)
        {
            return;
        }

        if (tn->val >= greatestvalue)
        {
            goodnodes++;
            greatestvalue = tn->val;
        }

        dfs(tn->left, greatestvalue); 
        dfs(tn->right, greatestvalue);
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
