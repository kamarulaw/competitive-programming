/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:  
    int pathSum(TreeNode* root, int targetSum) {
      if (root == NULL) 
        return 0; 
      return pathHelper(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }
  
    int pathHelper(TreeNode* root, int sum) { 
      int res = 0;
      
      if (root == NULL) 
        return res; 
      
      if (root->val == sum)
        res = 1; 
      return res + pathHelper(root->left, sum - root->val) + pathHelper(root->right, sum - root->val);
      
    }
};

/* SOLUTION 2 */ 
/* WRONG ANSWER ON CASE 100 of 129*/
class Solution {
public:
    int numpaths = 0;
    
    int pathSum(TreeNode* root, int targetSum) 
    {
        dfs(root, targetSum, 0); 
        return numpaths;    
    }

    void dfs(TreeNode* n, int targetSum, int pathSum)
    {
        if (n == NULL)
        {
            return;
        }

        if (pathSum + n->val == targetSum)
        {
            numpaths++;
        }

        dfs(n->left, targetSum, 0);
        dfs(n->left, targetSum, pathSum + n->val);

        dfs(n->right, targetSum, 0);
        dfs(n->right, targetSum, pathSum + n->val);
    }
};
