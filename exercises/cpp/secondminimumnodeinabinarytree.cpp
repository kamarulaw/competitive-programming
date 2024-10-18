/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> elems;
    void traversal(TreeNode* root)
    {
        if (root == NULL)
        {
            return;
        }
        elems.push_back(root->val);
        traversal(root->left);
        traversal(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) 
    {
        traversal(root);
        sort(elems.begin(),elems.end());
        for (int i = 0; i < elems.size(); i++)
        {
            if (elems[i] != elems[0])
            {
                return elems[i];
            }
        }
        return -1;
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
