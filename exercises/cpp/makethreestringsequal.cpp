/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) 
    {
        int ans = 0;
        int ind = 0;
        int s1len = s1.length();
        int s2len = s2.length();
        int s3len = s3.length();
        while (ind < min(s1len,min(s2len,s3len)))
        {
            if (s1[ind] == s2[ind] && s1[ind] == s3[ind])
            {
                ind++;
            }
            else
            {
                break;
            }
        }    
        ind--;
        if (ind == -1)
        {
            ans = -1;
        }
        else
        {
            ans += (s1len-1-ind);
            ans += (s2len-1-ind);
            ans += (s3len-1-ind);
        }
        return ans;
    }
};
