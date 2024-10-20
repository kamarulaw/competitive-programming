/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    map<int,vector<int>> m;

    void traversal(TreeNode* root, int depth)
    {
        if (root == NULL)
        {
            return;
        }
        m[depth].push_back(root->val);
        traversal(root->left,depth+1);
        traversal(root->right,depth+1);
    }

    vector<int> largestValues(TreeNode* root) 
    {
        vector<int> result;
        traversal(root,0);
        for (int i = 0; i < m.size(); i++)
        {
            sort(m[i].begin(),m[i].end());
            result.push_back(m[i][m[i].size()-1]);
        }    
        return result;
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
