/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 468 of 472 */
class Solution {
public:
    bool validPalindrome(string s) 
    {
        int pointer1 = 0;
        int pointer2 = s.length()-1;
        int n = s.length();
        bool chardeleted = false;
        while (pointer1 < n/2 && pointer2 >= n/2)
        {
            if (s[pointer1] != s[pointer2])
            {
                if (chardeleted == true)
                {
                    return false;
                }
                chardeleted = true;
                if (s[pointer1+1] == s[pointer2])
                {
                    pointer1 = pointer1 + 1;
                }
                else if (s[pointer1] == s[pointer2-1])
                {
                    pointer2 = pointer2-1;
                }
                else 
                {
                    return false;
                }
            }
            else 
            {
                pointer1++;
                pointer2--;
            }
        }
        return true;    
    }
};
