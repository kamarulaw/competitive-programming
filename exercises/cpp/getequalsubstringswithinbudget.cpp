/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    {
        long long mlen = -1;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n-i+1; j++)
            {
                long long ccost = 0;
                string ssub = s.substr(i,j);
                string tsub = t.substr(i,j);
                cout << ssub << " ";
                for (int k = 0; k < ssub.length(); k++)
                {
                    ccost += abs((int)ssub[k] - (int)tsub[k]);
                }
                cout << ccost << endl;
                if (ccost <= maxCost)
                {
                    if (ssub.length() > mlen)
                    {
                        mlen = (long long)ssub.length();
                    }
                }
            }
        }
        return mlen;
    }
};

/* SOLUTION 2 */
/* TIME LIMIT EXCEEDED ON CASE 35 of 37 */
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    {
        long long mlen = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n-i+1; j++)
            {
                long long ccost = 0;
                string ssub = s.substr(i,j);
                string tsub = t.substr(i,j);
                for (int k = 0; k < ssub.length(); k++)
                {
                    ccost += abs((int)ssub[k] - (int)tsub[k]);
                }
                if (ccost <= maxCost)
                {
                    if ((long long)ssub.length() > mlen)
                    {
                        mlen = ssub.length();
                    }
                }
            }
        }
        return mlen;
    }
};
