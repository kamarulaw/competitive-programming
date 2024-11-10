/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 51 of 97 */
class Solution {
public:
    int longestPalindrome(string s) 
    {
        map<char,int> m;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
            
        int longodd = 0;
        int evencount = 0;
        for (auto it: m)
        {
            if (it.second % 2 == 1)
            {
                longodd = max(longodd, it.second);
            }
            else 
            {
                evencount += it.second;
            }
        }
        return longodd + evencount;
    }
};
