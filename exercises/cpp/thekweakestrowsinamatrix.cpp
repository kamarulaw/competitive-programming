class Solution {
public:
  static bool comp(vector<int> a, vector<int> b) { 
    int n = a.size(); 
    int asold = 0; 
    int bsold = 0; 
    for (int i = 0; i < n-1; i++) { 
      asold += a[i];
      bsold += b[i];
    }
    return asold < bsold || a[n-1] < b[n-1];
  } 
  vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int m = mat.size(); 
    int n = mat[0].size(); 
    int start_twobased = 2; 
    
    for (int i = 0; i < mat.size(); i++) { 
      mat[i].push_back(start_twobased);
      start_twobased++;
    }     
    sort(mat.begin(), mat.end(), comp);
    
    vector<int> result;
    for (int i = 0; i < k; i++) { 
      result.push_back(mat[i][n] - 2);
    }
    return result; 
  }
};