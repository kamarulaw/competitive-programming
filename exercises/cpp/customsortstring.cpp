/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string customSortString(string order, string s) 
    {
        map<char,int> ref_;
        for (int i = 0; i < order.length(); i++)
        {
            ref_[order[i]] = i+1;
        }    
        int counter = 0;
        for (int i = (int)'a'; i <= (int)'z'; i++)
        {
            if (ref_[char(i)] == 0)
            {
                ref_[char(i)] = INT_MAX-counter;
                counter++;
            }
        }
        map<int,char> invref_; 
        for (auto it : ref_)
        {
            invref_[it.second] = it.first;
        }
        vector<int> vs;
        for (int i = 0; i < s.length(); i++)
        {
            vs.push_back(ref_[s[i]]);
        }
        sort(vs.begin(), vs.end());
        string sol = "";
        for (int i = 0; i < vs.size(); i++)
        {
            sol += invref_[vs[i]];
        }
        return sol; 
    }
};
