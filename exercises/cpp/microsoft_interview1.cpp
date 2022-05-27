// Problem: Serialize a Binary Tree

#include <stack>
#include <string>
#include <vector>
#include <iostream>

using namespace std; 

struct Treenode {
    int data; 
    Treenode *left; 
    Treenode *right; 
    Treenode(int val) { 
        data = val; 
        left = nullptr; 
        right = nullptr; 
    }
}; 

string serialize(Treenode root) { 
    if (root == nullptr) { 
        return ""; 
    }
    stack<Treenode> s;  
    s.push(root);
    vector<string> arr;

    while(s.size() != 0) { 
        Treenode node = s.top(); 
        s.pop(); 
        if (node == nullptr) {
            arr.push_back("*");
        } else { 
            arr.push_back(to_string(node.val));
            s.push(node.right);
            s.push(node.left);
        }
    }

    string result = ""; 
    for (int i = 0; i < arr.size(); i++) { 
        result += arr[i];
    }

    return result; 
}

int main() {
    // you can write to stdout for debugging purposes, e.g.
    cout << "This is a debug message" << endl;
    return 0;
}
