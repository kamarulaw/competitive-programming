/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minimumFlips(int n) 
    {
        string rep_ = bitset<32>(n).to_string();
        int frb = INT_MAX;
        for (int i = 0; i < 32; i++)
        {
            if (rep_[i] == '1')
            {
                frb = i; break;
            }
        }   
        string s_ = "";
        string _s = ""; 
        for (int i = frb; i < 32; i++)
        {
            s_.push_back(rep_[i]);
            _s.push_back(rep_[i]);
        }
        reverse(_s.begin(), _s.end());
        int sol = 0;
        for (int i = 0; i < s_.length(); i++)
        {
            if (s_[i] != _s[i])
            {
                sol++;
            }
        }
        return sol;
    }
};
