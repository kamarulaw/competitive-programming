/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
        int n = s.length();
        int largestss = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j && s[i] == s[j])
                {
                    largestss = max(largestss, j-i-1);
                }
            }
        }
        if (largestss == INT_MIN)
        {
            return -1;
        }
        return largestss;    
    }
};
