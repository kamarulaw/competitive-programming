/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    string majorityFrequencyGroup(string s) 
    {
        map<char,int> m; // char in s -> |char| in s
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }    
        map<int,int> m1; 
        for (auto it : m)
        {
            m1[it.second]++;
        }
        string ans = "";
        int mfc = INT_MIN;
        int mfg = INT_MIN;
        for (auto it : m1)
        {
            if (it.second == mfg)
            {
                if (it.first > mfc)
                {
                    mfc = it.first;
                }
                else 
                {
                    continue;
                }
            }
            else if (it.second > mfg)
            {
                mfc = it.first;
                mfg = it.second; 
            }
        }
        for (auto it : m)
        {
            if (m[it.first]==mfc)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
