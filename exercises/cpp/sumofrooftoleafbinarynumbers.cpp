/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 37 of 63 */
class Solution {
public:
    vector<string> root_to_leaf_values;
    void traversal(TreeNode* root, string val_)
    {
        if (root == NULL)
        {
            root_to_leaf_values.push_back(val_);
            return;
        }
        val_ += to_string(root->val);
        traversal(root->left,val_);
        traversal(root->right,val_);
    }

    int binval(string binstr)
    {
        int ans = 0;
        reverse(binstr.begin(), binstr.end());
        for (int i = 0; i < binstr.length(); i++)
        {
            if (binstr[i] == '1')
            {
                ans += pow(2,i);
            }
        }
        return ans;
    }

    int sumRootToLeaf(TreeNode* root) 
    {
        int tot = 0;
        traversal(root,""); 
        for (int i = 0; i < root_to_leaf_values.size(); i++)
        {
            tot += binval(root_to_leaf_values[i]);
        }
        return tot / 2;
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
