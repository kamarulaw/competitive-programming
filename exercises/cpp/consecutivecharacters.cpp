/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maxPower(string s) 
    {
        int ans = 1;
        int counter = 1; 
        int n = s.length();
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i-1])
            {
                counter++;
            }
            else 
            {
                counter = 1;
            }
            ans = max(ans, counter);
        }    
        return ans;
    }
};
