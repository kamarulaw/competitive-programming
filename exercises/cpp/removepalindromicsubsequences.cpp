/* SOLUTION 1 */
/* psf */

class Solution {
public:
    int removePalindromeSub(string s) 
    {
        int sol = 0;
        string rev = s;
        reverse(rev.begin(),rev.end());
        if (s.compare(rev)==0)
        {
            return 1;
        }        
        return sol;
    }
};
