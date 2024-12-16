/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {
        cout << (int)'a' << " " << (int)'z';    
        int ss1 = 0;
        int ss2 = 0;
        int s1len = str1.length();
        int s2len = str2.length();
        while (ss1 < s1len && ss2 < s2len)
        {

            if (str1[ss1] == str2[ss2])
            {
                ss1++;
                ss2++;
            }
            else if ((int)str1[ss1] == (int)'z' && 'a' == str2[ss2])
            {
                ss1++;
                ss2++;
            }
            else if ((int)str1[ss1] != (int)'z' && char((int)str1[ss1] + 1) == str2[ss2])
            {
                ss1++;
                ss2++;
            }
            else
            {
                ss1++;
            }
            if (ss2 == s2len)
            {
                return true; 
            }
        }
        return false;
    }
};
