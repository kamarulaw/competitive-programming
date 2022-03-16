#include <map>
#include <vector>
#include <iostream>

using namespace std; 

struct Treenode { 
  int data; 
  Treenode *left; 
  Treenode *rght; 
  Treenode(int data): data(data), left(nullptr), rght(nullptr) {} // Constructur
};


map<int, vector<int>> m; // stores each level of binary tree
void levelordertrav(Treenode* root, int depth) { 
  if (root != NULL) { 
    m[depth].push_back(root->data);
    levelordertrav(root->left, depth+1);
    levelordertrav(root->rght, depth+1);
  }
}

int main() {
  // Create Binary Tree
  Treenode root(12); 
  Treenode root_left(5);
  Treenode root_rght(13);
  Treenode root_left_left(3);
  Treenode root_left_rght(7);
  Treenode root_rght_left(8);
  Treenode root_rght_rght(20); 
  
  root.left = &root_left; 
  root.rght = &root_rght; 
  root_left.left = &root_left_left; 
  root_left.rght = &root_left_rght; 
  root_rght.left = &root_rght_left; 
  root_rght.rght = &root_rght_rght; 
  
  // Level Order Traversal of Binary Tree
  levelordertrav(&root, 0);
  vector<vector<int>> lvls; 
  for (auto elem: m) 
    lvls.push_back(elem.second);
    
  for (int i = 0; i < lvls.size(); i++) { 
    vector<int> lvl = lvls[i]; 
    for (int j = 0; j < lvl.size(); j++)
      cout << lvl[j] << " ";
    cout << endl; 
  
  }
}



