/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> depths;
    void maxdepthhelper(Node* root, int depth) { 
      if (root != NULL) { 
        depths.push_back(depth);
        for (int i = 0; i < root->children.size(); i++) 
          maxdepthhelper(root->children[i], depth+1);
      }
    }
    int maxDepth(Node* root) {
      if (root == NULL) 
        return 0; 
      maxdepthhelper(root, 1);
      sort(depths.begin(), depths.end());
      return depths[depths.size()-1];
    }
};