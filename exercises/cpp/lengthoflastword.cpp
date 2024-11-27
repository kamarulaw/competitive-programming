/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n = s.length();
        string word = "";
        int trimendspace = n-1;
        while (trimendspace >= 0 && s[trimendspace] == ' ')
        {
            trimendspace--;
        }
        s = s.substr(0,trimendspace+1);
        for (int i = 0; i < trimendspace+1; i++)
        {
            if (s[i] == ' ')
            {
                word = "";
            }
            else 
            {
                word += s[i];
            }
        }    
        return word.length();
    }
};
