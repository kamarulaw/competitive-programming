/* SOLUTION 1 - 09/01/21*/
/* All tests passed */
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

/* SOLUTION 2 - 12/27/24 */
/* All tests passed */
class Solution {
public:
    bool isPalindrome(string s) 
    {
        string s_ = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (!((0 <= s[i]-'0' && s[i]-'0' <= 9) 
            || ((int)'a' <= s[i] && s[i] <= (int)'z') 
            || ((int)'A' <= s[i] && s[i] <= (int)'Z')))
            {
                continue;
            }
            else
            {
                s_ += tolower(s[i]);
            }
        }
        int n = s_.length();
        for (int i = 0; i < n/2; i++)
        {
            if (s_[i] != s_[n-1-i])
            {
                return false;
            }
        }
        return true;
    }
};
