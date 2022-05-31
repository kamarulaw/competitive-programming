#include <vector>
#include <iostream>

using namespace std;

// To execute C++, please define "int main()"

/* 
"""
Given a square matrix, turn it by 90 degrees in a clockwise

Input:
1 2 3 
4 5 6
7 8 9  

Output:
7 4 1 
8 5 2
9 6 3

Input:
1 2
3 4

Output:
3 1
4 2 
"""

mat = [[1,2,3], [4,5,6], [7,8,9]]
out = [[7,4,1], [8,5,2], [9,6,3]]
*/

vector<vector<int>> clockwiserotation(vector<vector<int>> mat) { 
  int n = mat.size(); 
  vector<vector<int>> res; 

  // Initialize Matrix
  for (int i = 0; i < n; i++) { 
    vector<int> crow = {};
    for (int j = 0; j < n; j++) { 
      crow.push_back(0);
    }
    res.push_back(crow);
  }

  // Rotate Matrix

  // Mapping: (row, col) --> (col, n-1-row)
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n; j++) { 
      res[i][j] = mat[j][n-1-i];
    }
  }

  for (int i = 0; i < n /2; i++) { 
    vector<int> temp = res[i]; 
    res[i] = res[n-1-i];
    res[n-1-i] = temp;
  }

  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n/2; j++) { 
      int temp = res[i][j];
      res[i][j] = res[i][n-1-j]; 
      res[i][n-1-j] = temp; 
    }
  }
  return res; 
}

int main() {
  // Test Case
  vector<vector<int>> tc = {{1,2,3}, {4,5,6}, {7,8,9}};

  // Driver Code
  vector<vector<int>> sol = clockwiserotation(tc); 

  //Output Solution
  for (int i = 0; i < sol.size(); i++) { 
    for (int j = 0; j < sol[0].size(); j++) { 
      cout << sol[i][j];
    }
    cout << endl; 
  }
  return 0;
}
