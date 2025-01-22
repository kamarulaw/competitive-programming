/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 43 of 88 */
class Solution {
public:
    long long wonderfulSubstrings(string word) 
    {
        int ans = 0;
        int n = word.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                map<char,int> m;
                int oddsfound = 0;
                string ss = word.substr(i,j);
                for (int k = 0; k < ss.length(); k++)
                {
                    m[ss[k]]++;
                }
                for (auto it : m)
                {
                    if (it.second % 2 == 1)
                    {
                        oddsfound++;
                    }
                }
                if (oddsfound <= 1)
                {
                    ans++;
                }
            }
        }    
        return ans;
    }
};
