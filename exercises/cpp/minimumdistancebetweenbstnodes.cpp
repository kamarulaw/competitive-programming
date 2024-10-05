class Solution {
public:
    vector<int> vals;

    void traversal(TreeNode* root)
    {
        if (root == NULL)
        {
            return;
        }
        vals.push_back(root->val);
        traversal(root->left);
        traversal(root->right);
    }
    int minDiffInBST(TreeNode* root) 
    {
        if (root == NULL)
        {
            return 0;
        }
        traversal(root);
        sort(vals.begin(), vals.end());
        int minabsdiff = INT_MAX;
        for (int i = 0; i < vals.size() - 1; i++)
        {
            minabsdiff = min(minabsdiff, vals[i+1] - vals[i]);
        }
        return minabsdiff; 
    }
};
