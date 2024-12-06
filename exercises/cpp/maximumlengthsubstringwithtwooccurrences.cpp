/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maximumLengthSubstring(string s) 
    {
        int mls = INT_MIN; 
        int i = s.length();
        for (int n = 0; n < i; n++)
        {
            for (int m = 1; m <= i-n; m++)
            {
                string ss = s.substr(n,m);
                map<char,int> ssm;
                for (int l = 0; l < ss.length(); l++)
                {
                    ssm[ss[l]]++;
                }
                bool flag = true;
                for (auto it : ssm)
                {
                    if (it.second > 2)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag == true)
                {
                    mls = max(mls, (int)ss.length());
                }
            }
        }  
        return mls;  
    }
};
