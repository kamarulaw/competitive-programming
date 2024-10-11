/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int minLength(string s) 
    {
        int n = s.length();

        vector<char> sarr;
        vector<char> newsarr;

        for (int i = 0; i < n; i++)
        {
            sarr.push_back(s[i]);
        }

        bool cond = true;
        while (cond)
        {
            if (ab_inds(sarr)[0] != -1)
            {
                //sarr.erase(sarr.begin() + ab_inds(sarr)[1]);
                //sarr.erase(sarr.begin() + ab_inds(sarr)[0]);
                
                for (int i = 0; i < sarr.size(); i++) 
                {
                    if (i != ab_inds(sarr)[0] && i != ab_inds(sarr)[1])
                    {
                        newsarr.push_back(sarr[i]);
                    }
                }
                sarr = newsarr;
                newsarr.clear();
            }
            
            if (cd_inds(sarr)[0] != -1)
            {
                //sarr.erase(sarr.begin() + cd_inds(sarr)[1]); 
                //sarr.erase(sarr.begin() + cd_inds(sarr)[0]);
                for (int i = 0; i < sarr.size(); i++)
                {
                    if (i != cd_inds(sarr)[0] && i != cd_inds(sarr)[1])
                    {
                        newsarr.push_back(sarr[i]);
                    }
                }
                sarr = newsarr;
                newsarr.clear();
            }
            
            if (ab_inds(sarr)[0] == -1 && cd_inds(sarr)[0] == -1)
            {
                cond = false;
            }
        }

        return sarr.size();

    }
    vector<int> ab_inds(vector<char> s)
    {
        int n = s.size();
        vector<int> inds;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == 'A' && s[i+1] == 'B')
            {
                 
                inds.push_back(i);
                inds.push_back(i+1);
                return inds;
            }
        }
        inds.push_back(-1);
        return inds;
    }

    vector<int> cd_inds(vector<char> s)
    {
        int n = s.size();
        vector<int> inds;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == 'C' && s[i+1] == 'D')
            {
                 
                inds.push_back(i);
                inds.push_back(i+1);
                return inds;
            }
        }
        inds.push_back(-1);
        return inds;
    }
};
