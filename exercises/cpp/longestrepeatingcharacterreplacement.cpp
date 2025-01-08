/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.length();
        int sol = 1;
        for (int i = 0; i < n; i++)
        {
            map<char,int> m;
            for (int j = 1; j <= n; j++)
            {
                string ss = s.susbtr(0,j);
                int ii = 0;
                int kk = 0;
                while (ii < ss.length() && kk < k)
                {
                    m
                }
            }
        }    
    }
};
