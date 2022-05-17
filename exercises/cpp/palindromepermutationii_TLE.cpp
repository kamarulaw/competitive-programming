class Solution {
public:
    vector<string> perms; 
  
    bool isPalindrome(string s) { 
      int n = s.length(); 
      for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n-1-i])
          return false; 
      }
      return true; 
    }
  
    void permutations(int i, string s) { 
      int n = s.length(); 
      if (i == n-1) { 
        if (isPalindrome(s)) {
          perms.push_back(s);
        }
        return; 
      }    
      for (int j = i; j < n; j++) {
        swap(s[i], s[j]);
        permutations(i+1, s);
        swap(s[i], s[j]);
      }
    }
  
    vector<string> generatePalindromes(string s) {   
      // Time Limit Exceeded on Case 18/26
      vector<string> result; 
      permutations(0, s);
      sort(perms.begin(), perms.end()); 
      for (auto elem: perms) {
        if (result.size() == 0 || result[result.size()-1] != elem) { 
          result.push_back(elem);
        }
      }
      return result; 
    }
};