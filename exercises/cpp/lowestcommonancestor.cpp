/* SOLUTION 1*/
/* All test cases passed */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL)
        {
            return NULL;
        }

        if (root->val == p->val || root->val == q->val)
        {
            return root;
        }

        TreeNode* l_lca = lowestCommonAncestor(root->left, p, q);
        TreeNode* r_lca = lowestCommonAncestor(root->right, p, q);

        if (l_lca != NULL && r_lca != NULL)
        {
            return root;
        }

        if (l_lca != NULL)
        {
            return l_lca;
        }

        return r_lca;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
