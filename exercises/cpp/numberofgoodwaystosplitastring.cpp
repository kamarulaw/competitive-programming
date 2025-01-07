/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 52 of 61 */
class Solution {
public:
    int numSplits(string s) 
    {
        int n = s.length();
        int sol = 0;
        map<char,int> left;
        map<char,int> right;
        for (int i = 0; i < n; i++)
        {
            left.clear();
            right.clear();
            for (int ii = 0; ii <= i; ii++)
            {
                left[s[ii]]++;
            }
            for (int jj = i+1; jj < n; jj++)
            {
                right[s[jj]]++;
            }
            if (left.size() == right.size())
            {
                sol++;
            }
        }
        return sol;
    }
};
