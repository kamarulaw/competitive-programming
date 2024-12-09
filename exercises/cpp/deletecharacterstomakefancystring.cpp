/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    string makeFancyStringUtil(string s_)
    {
        int count = 1;
        int n = s_.length();
        string sol = "";
        vector<string> comps;
        for (int i = 1; i < n; i++)
        {
            if (s_[i] == s_[i-1])
            {
                count++;
            }
            else 
            {
                if (count >= 3)
                {
                    int startind = i - count + 1;
                    string ss = s_.substr(startind, 2);
                    comps.push_back(ss);
                    cout << ss << " ";
                }
                else 
                {
                    int startind = i - count + 1;
                    string ss = s_.substr(startind, count);
                    comps.push_back(ss);
                    cout << ss << " ";
                    count = 1;
                }
            }
        }
        for (int i = 0; i < comps.size(); i++)
        {
            sol += comps[i];
        }
        return sol;
    }

    string makeFancyString(string s) 
    {
        while (s != makeFancyStringUtil(s))
        {
            s = makeFancyStringUtil(s);
        }   
        return s;
    }
};
