class Solution {
public:
  bool isPalindrome(string s) { 
    string snew = ""; 
    for (int i = 0; i < s.length(); i++) 
      if (isalnum(s[i])) 
        snew += tolower(s[i], locale());
    for (int i = 0; i < snew.length() / 2; i++) 
      if (snew[i] != snew[snew.length()-1-i])
        return false; 
    return true; 
  }
};