/* SOLUTION 1 */
/* psf */

class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) 
    {
        vector<int> v_;
        map<int,int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int frb = INT_MAX;
            string rep_ = bitset<32>(nums[i]).to_string();
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
            reverse(_rep.begin(),_rep.end());
            m[nums[i]] = stoi(_rep);
            v_.push_back(stoi(_rep));
        }
        sort(v_.begin(),v_.end());
        vector<int> 
    }
};
