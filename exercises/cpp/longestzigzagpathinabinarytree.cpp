/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 51 of 58 */
class Solution {
public:
    int maxnodesvisited = 1;

    int longestZigZag(TreeNode* root) 
    {
        dfs(root->left, 'L', 1); 
        dfs(root->right, 'R', 1);
        return maxnodesvisited-1;
    }

    void dfs(TreeNode* r, char camefrom, int nodecount)
    {
        if (r == NULL)
        {
            return;
        }
        else 
        {
            nodecount++;
            maxnodesvisited = max(nodecount,maxnodesvisited);

            dfs(r->left, 'L', 1);
            dfs(r->right, 'R', 1);
            
            if (camefrom == 'L')
            {
                dfs(r->right, 'R', nodecount);
            }

            if (camefrom == 'R')
            {
                
                dfs(r->left, 'L', nodecount);
            }
        }
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
