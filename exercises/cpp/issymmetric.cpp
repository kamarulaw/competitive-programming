class Solution {
public:
    TreeNode* mirroredTree(TreeNode* root) { 
      if (root == NULL)
        return NULL; 
      
      TreeNode* temp = root->left; 
      root->left = root->right; 
      root->right = temp; 
      
      mirroredTree(root->left);
      mirroredTree(root->right);
      
      return root; 
    }
  
    bool isEqual(TreeNode* p, TreeNode* q) { 
      if (p == NULL && q == NULL)
        return true; 
      if (p == NULL || q == NULL)
        return false; 
      return p->val == q->val && isEqual(p->left, q->left) && isEqual(p->right, q->right);
    }
  
    bool isSymmetric(TreeNode* root) {
      if (root == NULL) 
        return true; 
      return isEqual(mirroredTree(root->left), root->right);
    }
};