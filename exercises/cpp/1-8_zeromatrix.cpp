#include <iostream>
#include <vector>
#include <set>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
  set<vector<int>> zidxs; 
  int m = matrix.size(); 
  int n = matrix[0].size(); 
  for (int i = 0; i < m; i++) { 
    for (int j = 0.; j < n; j++) { 
      if (matrix[i][j] == 0) { 
        for (int k = 0; k < n; k++) { 
          vector<int> idx = {k, j};
          zidxs.insert(idx);
        }
        for (int k = 0; k < m; k++) { 
          vector<int> idx = {i, k}; 
          zidxs.insert(idx);
        }
      }
    }
  }
      
  for (auto elem: zidxs) { 
    int ci = elem[0];
    int cj = elem[1];
    matrix[ci][cj] = 0; 
  }
}

int main() {
  // create test case
  vector<vector<int>> matrix; 
  vector<int> temp = {0,1,2,0};
  matrix.push_back(temp);
  temp = {3,4,5,2};
  matrix.push_back(temp);
  temp = {1,3,1,5};
  matrix.push_back(temp);
  
  // run function
  setZeroes(matrix);
  
  // check output
  cout << matrix.size(); 
  cout << matrix[0].size(); 
  for (int i = 0; i < matrix.size(); i++) { 
    for (int j = 0; j < matrix[0].size(); j++) { 
      cout << matrix[i][j] << " ";
    }
    cout << endl; 
  }
  
  return 0;
}
