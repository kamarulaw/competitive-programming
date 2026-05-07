/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    int countMonobit(int n) 
    {
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            int frb = INT_MAX;
            string rep_ = bitset<32>(i).to_string();
            for (int j = 0; j < 32; j++)
            {
                if (rep_[j] == '1')
                {
                    frb = j; break;
                }
            }
            string _rep = "";
            for (int j = frb; j < 32; j++)
            {
                _rep.push_back(rep_[j]);
            }
            int asltti = 0;
            for (int j = 0; j < _rep.length(); j++)
            {
                if (_rep[j] == '1')
                {
                    asltti++;
                }
            }
            if (asltti==_rep.length())
            {
                ans++;
            }
        }
        return ans;
    }
};
