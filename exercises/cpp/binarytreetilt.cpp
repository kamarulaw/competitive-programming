/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 20 of 77 */
class Solution {
public:
    vector<int> tilts;

    int sumoftree(TreeNode* root)  
    {
        if (root == NULL)
        {
            return 0;
        }
        return root->val + sumoftree(root->left) + sumoftree(root->right);
    }

    int findtilt(TreeNode* root)
    {
        if (root == NULL)
        {
            return 0;
        }
        return abs(sumoftree(root->left) - sumoftree(root->right));
    }

    void traversal(TreeNode* root)
    {
        if (root == NULL)
        {
            return;
        }
        tilts.push_back(findtilt(root));
        tilts.push_back(findtilt(root->left));
        tilts.push_back(findtilt(root->right));
    }

    int findTilt(TreeNode* root) 
    {
        traversal(root);
        int tiltsum = 0;
        for (int i = 0; i < tilts.size(); i++)
        {
            tiltsum += tilts[i]; 
        }
        return tiltsum;
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
