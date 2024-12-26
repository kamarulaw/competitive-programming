/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        if (s.length() <= 10)
        {
            return {};
        }
        int n = s.length();
        map<string,int> map_;
        for (int i = 0; i < n; i++)
        {
            if (i + 9 >= n)
            {
                break;
            }
            string s_ = "";
            for (int j = i; j <= i+9; j++)
            {
                s_ += s[j]; 
            }
            map_[s_]++;
        }    
        vector<string> sol;
        for (auto it : map_)
        {
            if (it.second >= 2)
            {
                sol.push_back(it.first);
            }
        }
        return sol;
    }
};
