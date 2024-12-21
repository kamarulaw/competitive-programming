/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 33 of 38 */
class Solution {
public:
    int longestSubstring(string s, int k) 
    {
        int n = s.length();
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                string ss = s.substr(i,j);
                map<char,int> ssm;
                for (int k = 0; k < ss.length(); k++)
                {
                    ssm[ss[k]]++;
                }
                bool flag = true;
                for (auto it : ssm)
                {
                    if (it.second < k)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag == true && ss.length() > sol)
                {
                    sol = ss.length();
                }
            }
        }    
        return sol;
    }
};
