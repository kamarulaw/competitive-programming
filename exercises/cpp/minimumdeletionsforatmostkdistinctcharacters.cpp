/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minDeletion(string s, int k) 
    {
        map<char,int> m;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }    
        vector<int> counts;
        if (m.size() == k)
        {
            return 0;
        }
        int ans = 0;
        int newk = m.size() - k;
        for (auto it : m)
        {
            counts.push_back(it.second);
        }
        sort(counts.begin(), counts.end());
        for (int i = 0; i < newk; i++)
        {
            ans += counts[i];
        }
        return ans;
    }
};
