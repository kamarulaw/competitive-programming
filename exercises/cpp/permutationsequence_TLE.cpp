class Solution {
public:
    string s = ""; 
    vector<string> perms;
  
    void permutations(int i, string s) { 
      int n = s.length(); 
      if (i == n-1) { 
        perms.push_back(s);
        return; 
      }
      for (int j = i; j < n; j++) { 
        swap(s[i], s[j]);
        permutations(i+1, s);
        swap(s[i], s[j]);
      }
    }
  
    string getPermutation(int n, int k) {
      // Time Limit Exceeded on Case 67
      for (int i = 0; i < n; i++)
        s += to_string(i+1);
      permutations(0,s);
      sort(perms.begin(), perms.end());
      return perms[k-1];
    }
};